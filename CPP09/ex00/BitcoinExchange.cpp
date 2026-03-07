#include "BitcoinExchange.hpp"

static bool isleapyear(int year)
{
    return (year % 4 == 0);
}

static bool isValidDate(const std::string &date)
{
    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    int year = std::atoi(date.substr(0,4).c_str());
    int month = std::atoi(date.substr(5,2).c_str());
    int day = std::atoi(date.substr(8,2).c_str());

    if (year < 0)
        return false;
    if (month < 1 || month > 12)
        return false;
    int dayInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2 && isleapyear(year))
        dayInMonth[1] = 29;
    if (day < 1 || day > dayInMonth[month-1])
        return false;
    return true;
}

BitcoinExchange::BitcoinExchange()
{
    fillDatabase();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _database(other._database)
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        _database = other._database;
    }
    return *this;
}

void BitcoinExchange::processInput(char *av)
{
    std::string line;
    std::ifstream file(av);
    if (!file)
    {
        std::cout << "Error: wrong file" << std::endl;
        return;
    }
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::stringstream ss(line);

        std::string date;
        char pipe;
        float value;
        if (!(ss >> date >> std::ws >> pipe >> std::ws >> value))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (!isValidDate(date))
        {
            std::cout << "Error: invalid date => " << line << std::endl;
            continue;
        }
        if (pipe != '|')
        {
            std::cout << "Error: bad input format => " << line << std::endl;
            continue;
        }
        if (value < 0)
        {
            std::cout << "Error: not a positive number" << std::endl;
            continue;
        }
        if (value > 1000)
        {
            std::cout << "Error: too large a number" << std::endl;
            continue;
        }
        std::map<std::string, float>::iterator it = _database.lower_bound(date);
        if (_database.empty())
        {
            std::cout << "Error: database is empty" << std::endl;
            return;
        }
        if (it == _database.begin() && it->first != date)
        {
            std::cout << "Error: no earlier data available" << std::endl;
            continue;
        }
        if (it == _database.end() || it->first != date)
            --it;
        double result = value * it->second;
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::fillDatabase()
{
    std::string line;
    std::ifstream file("data.csv");
    if (!file)
    {
        std::cout << "Error: could not open database" << std::endl;
        return;
    }
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date, valueStr;

        if (!std::getline(ss, date, ',') || !std::getline(ss, valueStr))
            continue;
        double value = std::atof(valueStr.c_str());
        _database[date] = value;
    }
}
#pragma once

#include <iostream>
#include <map>
#include <sstream>
#include <fstream>
#include <string>
#include <cstdlib>


class BitcoinExchange
{
    private:
        std::map<std::string, float> _database;
        void fillDatabase();
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

    void processInput(char *av);
};


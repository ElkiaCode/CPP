#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter()
{

}

static double convertToDouble(const std::string &literal, e_type type)
{
    if (type == TYPE_CHAR)
        return static_cast<double>(literal[0]);
    if (type == TYPE_INT)
        return static_cast<double>(strtol(literal.c_str(), NULL, 10));
    if (type == TYPE_FLOAT)
        return static_cast<double>(strtof(literal.c_str(), NULL));
    if (type == TYPE_DOUBLE)
        return strtod(literal.c_str(), NULL);
    if (type == TYPE_PSEUDO)
    {
        if (literal == "nan" || literal == "nanf")
            return std::numeric_limits<double>::quiet_NaN();
        if (literal[0] == '-')
            return -std::numeric_limits<double>::infinity();
        return std::numeric_limits<double>::infinity();
    }
    return 0.0;
}

static void printChar(double value)
{
    char c = static_cast<char>(value);

    if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }
    if (!std::isprint(c))
    {
        std::cout << "char: non displayable" << std::endl;
        return;
    }
    std::cout << "char: '" << c << "'" << std::endl;
}

static void printInt(double value)
{
    if (std::isnan(value) || std::isinf(value) || value < INT_MIN || value > INT_MAX)
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static void printFloat(double value)
{
    float f = static_cast<float>(value);
    if (std::isnan(f))
    {
        std::cout << "float: nanf" << std::endl;
        return;
    }
    if (std::isinf(f))
    {
        if (f < 0)
            std::cout << "float: -inff" << std::endl;
        else
            std::cout << "float: +inff" << std::endl;
        return;
    }
    std::cout << "float: " << f;
    if (f == static_cast<int>(f))
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

static void printDouble(double value)
{
    if (std::isnan(value))
    {
        std::cout << "double: nan" << std::endl;
        return;
    }
    if (std::isinf(value))
    {
        if (value < 0)
            std::cout << "double: -inf" << std::endl;
        else
            std::cout << "double: +inf" << std::endl;
        return;
    }
    std::cout << "double: " << value;
    if (value == static_cast<int>(value))
        std::cout << ".0";
    std::cout << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
    e_type type = detectType(literal);

    if (type == TYPE_INVALID)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }

    double value = convertToDouble(literal, type);
    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
}
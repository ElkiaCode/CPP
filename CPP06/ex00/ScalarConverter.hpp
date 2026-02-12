#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <iostream>
#include <cctype>
#include <limits>
#include <cmath>
#include <climits>

enum e_type {
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_PSEUDO,
    TYPE_INVALID
};

e_type detectType(const std::string &literal);

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();

    public:
        static void convert(const std::string &literal);
};

#endif
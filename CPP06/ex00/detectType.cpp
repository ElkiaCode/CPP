#include "ScalarConverter.hpp"

static bool isInt(const std::string &s)
{
    size_t i = 0;

    if (i == s.length())
        return false;
    while (i < s.length())
    {
        if (!std::isdigit(s[i]))
            return false;
        i++;
    }
    return true;
}

static bool isFloat(const std::string &s)
{
    size_t i = 0;
    bool point = false;

    if (s[i] == '+' || s[i] == '-')
        i++;
    if (i == s.length())
        return false;
    while (i < s.length() - 1)
    {
        if (s[i] == '.')
        {
            if (point)
                return false;
            point = true;
        }
        else if (!std::isdigit(s[i]))
            return false;
        i++;
    }
    return point && s[s.length() - 1] == 'f';
}

static bool isDouble(const std::string &s)
{
    size_t i = 0;
    bool point = false;

    if (s[i] == '+' || s[i] == '-')
        i++;
    if (i == s.length())
        return false;
    while (i < s.length())
    {
        if (s[i] == '.')
        {
            if (point)
                return false;
            point = true;
        }
        else if (!std::isdigit(s[i]))
            return false;
        i++;
    }
    return point;
}

e_type detectType(const std::string &literal)
{
    if (literal == "nan" || literal == "nanf"
        || literal == "+inf" || literal == "+inff"
        || literal == "-inf" || literal == "-inff")
        return TYPE_PSEUDO;
    if (literal.length() == 1 && !std::isdigit(literal[0]))
        return TYPE_CHAR;
    if (isInt(literal))
        return TYPE_INT;
    if (isFloat(literal))
        return TYPE_FLOAT;
    if (isDouble(literal))
        return TYPE_DOUBLE;
    return TYPE_INVALID;
}
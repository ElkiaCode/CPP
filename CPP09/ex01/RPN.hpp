#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <stdexcept>


class RPN
{
    public:
        static int calcul(const std::string &polish);
};
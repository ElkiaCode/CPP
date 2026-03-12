#include "RPN.hpp"

int RPN::calcul(const std::string &polish)
{
   std::stack<int> stack;
    std::stringstream ss(polish);
    std::string token;

    while (ss >> token)
    {
        if (token.length() == 1 && isdigit(token[0]))
        {
            int value = token[0] - '0';
            stack.push(value);
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (stack.size() < 2)
                throw std::runtime_error("not enough digit");
            int x = stack.top();
            stack.pop();
            int y = stack.top();
            stack.pop();
            int result;
            if (token == "+")
                result = y + x;
            else if (token == "-")
                result = y - x;
            else if (token == "*")
                result = y * x;
            else if (token == "/")
            {
                if (x == 0)
                    throw std::runtime_error("division by 0");
                result = y / x;
            }
            stack.push(result);
        }
        else
            throw std::runtime_error("Need only digit (0 to 9) or operator");
    }
    if (stack.size() != 1)
        throw std::runtime_error("Error");
    return stack.top();
}

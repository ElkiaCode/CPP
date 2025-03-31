#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
   std::string result;

    if (ac > 1) {
        for (int i = 1; i < ac; i++) {
           result += av[i];
           if (i < ac - 1) result += " "; 
        }
        for (size_t j = 0; j < result.size(); j++) {
            result[j] = std::toupper(result[j]);
        }
        std::cout << result << std::endl;
    }
    else
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
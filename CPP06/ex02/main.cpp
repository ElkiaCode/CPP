#include "Identifier.hpp"

int main()
{
    std::srand(std::time(NULL));

    Base *p = generate();

    identify(p);
    identify(*p);

    delete p;
}
#include "Span.hpp"

int main()
{
    try
    {
        Span sp(10);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        std::vector<int> moreNumbers;
		moreNumbers.push_back(20);
		moreNumbers.push_back(25);
		moreNumbers.push_back(30);
        sp.addNumber(moreNumbers.begin(), moreNumbers.end());

        std::cout << "After adding range:" << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        std::vector<int> tooMany;
		tooMany.push_back(40);
		tooMany.push_back(50);
		tooMany.push_back(60);
        sp.addNumber(tooMany.begin(), tooMany.end());

    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
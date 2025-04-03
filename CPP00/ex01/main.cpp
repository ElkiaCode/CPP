#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <cctype>

void search_contact(PhoneBook *phoneBook)
{
	int index = 0;

	std::string index_str;

    if (phoneBook->get_size() == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }
    phoneBook->display_contacts();
    std::cout << "Enter contact index: ";
    std::getline(std::cin, index_str);
    if (index_str.empty() || !std::isdigit(index_str[0])) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    for (size_t i = 0; i < index_str.length(); i++)
    {
        if (!std::isdigit(index_str[i]))
        {
            std::cout << "Invalid index." << std::endl;
            return;
        }
        index = index * 10 + (index_str[i] - '0');
    }
    index--;
    if (index < 0 || index >= phoneBook->get_size()) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    phoneBook->final_display_contact(index);
}

std::string inputuser(std::string entrie)
{
	std::string user_input = "";

	while (user_input.length() == 0)
	{
		std::cout << entrie;
		std::getline(std::cin, user_input);
	}
	return (user_input);
}

void add_contact(PhoneBook *phoneBook)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	first_name = inputuser("Enter first name: ");
	last_name = inputuser("Enter last name: ");
	nick_name = inputuser("Enter nick name: ");
	phone_number = inputuser("Enter phone number: ");
	darkest_secret = inputuser("Enter darkest secret: ");
	phoneBook->add_contact(first_name , last_name, nick_name, phone_number, darkest_secret);
}

int main()
{
    std::string buff;
    PhoneBook PhoneBook;

    while(1)
    {
        std::cout << "Enter command: ";
        if (!(std::getline(std::cin, buff)))
			return (1);
        if (buff.compare("ADD") == 0)
            add_contact(&PhoneBook);
        else if (buff.compare("SEARCH") == 0)
            search_contact(&PhoneBook);
        else if (buff.compare("EXIT") == 0)
            break;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}
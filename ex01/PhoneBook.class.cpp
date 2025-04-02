#include "PhoneBook.class.hpp"

std::string truncate(std::string str) {
    if (str.length() > 9)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::final_display_contact(int index) const
{
    if (index < 0 || index >= count_entries)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    std::cout << "First Name: " << contacts[index].getFirst_name() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLast_name() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNick_name() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhone_number() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkest_secret() << std::endl;
}

void PhoneBook::display_contacts() const
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    for (int i = 0; i < count_entries; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << truncate(contacts[i].getFirst_name()) << "|"
                  << std::setw(10) << truncate(contacts[i].getLast_name()) << "|"
                  << std::setw(10) << truncate(contacts[i].getNick_name()) << std::endl;
    }
}

int oldest_entries(Contact contacts[8])
{
    int oldest = 0;
    int i = 0;

    while (i++ < 8)
    {
        if (contacts[i].getCreated() < contacts[oldest].getCreated())
            oldest = i;
    }
    return (oldest);
}

PhoneBook::PhoneBook(void)
{
    this->count_entries = 0;
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

int PhoneBook::get_size() const
{
    return count_entries;
}

void PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nick_name,
    std::string phone_number, std::string darkest_secret)
{
    if (count_entries < 8)
    {
        contacts[count_entries] = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
        count_entries++;
    }
    else
        contacts[oldest_entries(contacts)] = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
}
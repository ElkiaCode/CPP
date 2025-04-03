#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"
#include <iostream>
#include <string>
# include <iomanip>
#include <limits>
#include <ctime>

class PhoneBook
{
    private:
        int count_entries;
    public:
        PhoneBook();
        ~PhoneBook();

        Contact contacts[8];

        void add_contact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret);
        int get_size() const;
        void display_contacts() const;
        void final_display_contact(int index) const;
};

int oldest_entries(Contact Contacts[8]);
#endif
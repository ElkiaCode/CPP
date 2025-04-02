#include "Contact.class.hpp"

Contact::Contact()
{
    Created = time(&Created);
    return;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name,
    std::string phone_number, std::string darkest_secret)
{
    First_name = first_name;
    Last_name = last_name;
    Nick_name = nick_name;
    Phone_number = phone_number;
    Darkest_secret = darkest_secret;
    time(&Created);


}

Contact::~Contact()
{
	return;
}

std::string Contact::getFirst_name() const
{
    return(First_name);
}

std::string Contact::getLast_name() const
{
    return(Last_name);
}

std::string Contact::getNick_name() const
{
    return(Nick_name);
}

std::string Contact::getPhone_number() const
{
    return(Phone_number);
}

std::string Contact::getDarkest_secret() const
{
    return(Darkest_secret);
}

time_t Contact::getCreated() const
{
    return(Created);
}
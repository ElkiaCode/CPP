#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <ctime>

class Contact
{
    private:
        std::string Last_name;
        std::string First_name;
        std::string Nick_name;
        std::string Phone_number;
        std::string Darkest_secret;
        time_t Created;
    public:

        Contact();
        ~Contact();
        Contact(std::string first_name, std::string last_name, std::string nick_name,
            std::string phone_number, std::string darkest_secret);
        
        std::string getLast_name() const;
        std::string getFirst_name() const;
        std::string getNick_name() const;
        std::string getPhone_number() const;
        std::string getDarkest_secret() const;
        time_t getCreated() const;
};

#endif

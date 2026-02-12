#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <stdint.h>
#include <iostream>

struct Data
{
    int value;
};

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);
        ~Serializer();
    public:
        static uintptr_t serialize(Data *p);
        static Data *deserialize(uintptr_t r);
};

#endif
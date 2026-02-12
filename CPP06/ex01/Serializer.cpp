#include "Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::Serializer(const Serializer &other)
{
    (void)other;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    (void)other;
    return *this;
}

Serializer::~Serializer()
{

}

uintptr_t Serializer::serialize(Data *p)
{
    uintptr_t result = reinterpret_cast<uintptr_t>(p);
    return result;
}

Data *Serializer::deserialize(uintptr_t r)
{
    Data *result = reinterpret_cast<Data *>(r);
    return result;
}
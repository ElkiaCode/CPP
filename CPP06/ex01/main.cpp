#include "Serializer.hpp"

int main()
{
    Data data;
    data.value = 42;

    uintptr_t r = Serializer::serialize(&data);
    Data *p = Serializer::deserialize(r);

    std::cout << "Address: " << &data << std::endl;
    std::cout << "Deserialized address: " << p << std::endl;
    std::cout << "Value: " << p->value << std::endl;

    return 0;
}

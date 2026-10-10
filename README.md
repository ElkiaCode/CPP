# C++ Modules (CPP00 → CPP09)

*The ten C++ modules of the 42 curriculum, written in C++98 and compiled with `-Wall -Wextra -Werror -std=c++98`.*

Each folder holds one module, and each `exNN` subfolder holds one exercise with its own `Makefile`.

| Module | Topics | Highlights |
|---|---|---|
| **CPP00** | Namespaces, classes, member functions, iostreams | `megaphone`, a `PhoneBook` with contacts |
| **CPP01** | Memory allocation, references, pointers to members, `switch` | Zombie horde, `Weapon` references, `sed` clone, `Harl` log filter |
| **CPP02** | Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form | `Fixed` point number class with arithmetic and comparison operators |
| **CPP03** | Inheritance | `ClapTrap` → `ScavTrap` / `FragTrap` |
| **CPP04** | Subtype polymorphism, abstract classes, interfaces | `Animal` / `Brain` deep copy, Materia system |
| **CPP05** | Exceptions | `Bureaucrat`, `Form`s and an `Intern` factory |
| **CPP06** | C++ casts | Scalar type converter, serialization, dynamic type identification |
| **CPP07** | Templates | `swap` / `min` / `max`, `iter`, generic `Array<T>` |
| **CPP08** | Templated containers, iterators, algorithms | `easyfind`, `Span`, iterable `MutantStack` |
| **CPP09** | STL in practice | Bitcoin exchange (CSV + `std::map`), RPN calculator, Ford-Johnson merge-insert sort |

## Build an exercise

```bash
cd CPP09/ex01
make
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
```

## Author

[ElkiaCode](https://github.com/ElkiaCode) (cparodi), 42 Nice.

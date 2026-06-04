*This project has been created as part of the 42 curriculum by drhaouha.*
# C++ - Module 04
## Description
Fifth module of the 42 C++ series. Covers subtype polymorphism, abstract classes, and interfaces. Introduces virtual functions, pure virtual functions (`= 0`), virtual destructors, deep copies with heap-allocated members, and the C++98 pattern for interfaces via pure abstract classes.
## Exercises
| # | Name | Description |
|---|------|-------------|
| 00 | Polymorphism | `Animal` base class with `virtual makeSound()` — `Dog` and `Cat` derived classes; `WrongAnimal`/`WrongCat` to demonstrate non-virtual dispatch |
| 01 | I don't want to set the world on fire | `Brain` class (array of 100 `std::string ideas`); `Dog` and `Cat` own a `Brain*` — deep copy required, virtual destructor mandatory |
| 02 | Abstract class | Make `Animal` (or `AAnimal`) a pure abstract class — `makeSound()` becomes pure virtual, direct instantiation forbidden |
| 03 | Interface & recap | `AMateria` abstract class + `Ice`/`Cure` concrete types; `ICharacter` and `IMateriaSource` interfaces; `Character` (4-slot inventory, deep copy) and `MateriaSource` (4-slot template store) (optional) |
## Key concepts
```
Animal (virtual makeSound, virtual ~Animal)
├── Dog  (Brain*, deep copy, "Woof")
└── Cat  (Brain*, deep copy, "Meow")

AMateria (abstract: clone() = 0, use())
├── Ice   → "* shoots an ice bolt at <name> *"
└── Cure  → "* heals <name>'s wounds *"

ICharacter (interface: equip, unequip, use)
└── Character (inventory[4], deep copy)

IMateriaSource (interface: learnMateria, createMateria)
└── MateriaSource (templates[4])
```
## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o <binary>
```
Each exercise has its own `Makefile`.
## Rules
- C++98 only — no C++11, no Boost
- No `printf`, `*alloc`, `free`
- No `using namespace` or `friend`
- No STL containers or algorithms (authorized from Module 08 only)
- All classes in **Orthodox Canonical Form**
- No function implementations in headers (except templates)
- Include guards on all headers
- No memory leaks — virtual destructors required when deleting through base pointers
## Resources
- [cplusplus.com — Virtual functions](https://cplusplus.com/doc/tutorial/polymorphism/)
- [cplusplus.com — Abstract base classes](https://cplusplus.com/doc/tutorial/polymorphism/#abstract)
- [isocpp.org — Virtual destructors FAQ](https://isocpp.org/wiki/faq/virtual-functions#virtual-dtors)

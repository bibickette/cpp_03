🇫🇷 Version française disponible [ici](README_FR.md)
* * *
# Project presentation - `cpp_03`
## **Description**

This project introduces **inheritance** in C++ and focuses on understanding relationships between classes.

The exercises introduce how base and derived classes interact, how constructors and destructors behave in an inheritance hierarchy, and how to reuse code properly while respecting object-oriented design principles.

* * *

## Languages & Technologies

**Language**
- C++ (C++98 standard)

**Technologies**
- Makefile

* * *
## Key Concepts
- Class inheritance (base and derived classes)
- Constructor and destructor order
- Access specifiers (`public`, `protected`, `private`)
- Code reuse
- Multiple levels of inheritance
- Ambiguity and scope resolution

* * *
## Exercices Overview
### ex00. Aaaaand... OPEN!
Introduction to inheritance:
- Creating a base class
- Deriving a new class from it
- Understanding constructor and destructor order
- Reusing attributes and member functions

### ex01. Serena, my love!
Inheritance with extended behavior:
- Adding new attributes to a derived class
- Overriding behavior
- Understanding access specifiers (`public`, `protected`, `private`)
- Code reuse without duplication

### ex02. Repetitive work
Multiple derived classes:
- Creating several classes inheriting from the same base class
- Specializing behavior for each derived class
- Understanding how base class functions are reused
- Managing constructors and destructors correctly

### ex03. Now it’s weird!
Complex inheritance relationships:
- Combining multiple inheritance levels
- Understanding ambiguity and scope resolution
- Reinforcing proper class design
- Ensuring correct object initialization and destruction

* * *

## Compilation rules

All exercises are compiled using the following flags :
- `-Wall`
- `-Wextra`
- `-Werror`
- `-std=c++98`

* * *
# Using `cpp_03`

## How to use `cpp_03`

*Note : this repository contains only the `cpp_03` module. It is part of the global [cpp_modules](https://github.com/bibickette/cpp_modules) repository, which regroups all C++ modules.*

1. Clone `cpp_03` in a folder first  : `git clone git@github.com:bibickette/cpp_03.git`
2. Move into the repository : `cd cpp_03`
3. Compile the module : `make`; this will compile all exercises contained in the module
4. You can now move into each exercices and run the corresponding executable

* * *
*Project validation date : March 17, 2025*
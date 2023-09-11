#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
    Person();
    Person(std::string name);
protected:
    std::string name;
};

#endif
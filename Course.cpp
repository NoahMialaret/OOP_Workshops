#include "Course.h"

Course::Course()
    :
    id(-1),
    name("")
{}

Course::Course(int id, std::string name)
    :
    id(id),
    name(name)
{}

void Course::addPerson(Person *p)
{
    people.push_back(p);
}

int Course::getId()
{
    return id;
}

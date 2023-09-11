#include "Student.h"

Student::Student()
    :
    Person(""),
    id(-1)
{}

Student::Student(std::string name, int id)
    :
    Person(name),
    id(id)
{}

int Student::getId()
{
    return id;
}

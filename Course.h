#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

#include "Person.h"

class Course
{
public:
    Course();
    Course(int id, std::string name);
    void addPerson(Person* p);

    int getId();
private:
    int id;
    std::string name;

    std::vector<Person*> people;
};

#endif
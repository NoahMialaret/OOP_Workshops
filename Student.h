#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
public:
    Student();
    Student(std::string name, int id);

    int getId();
private:
    int id;
};

#endif
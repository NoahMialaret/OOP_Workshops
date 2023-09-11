#include <iostream>

#include "University.h"
#include "Course.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"

int main()
{
    University uni("Uni Adelaide", "here");

    uni.addCourse(2013, "OOP");

    Student* student = new Student("Noah", 24);

    uni.getCourse(2013)->addPerson(student);

    uni.getGradebook()->addGrade(24, 2013, "OOP Project", 70);

    return 0;
}
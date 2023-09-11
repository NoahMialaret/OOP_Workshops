#ifndef UNIVERSITY_h
#define UNIVERSITY_h

#include <string>
#include <vector>

#include "Course.h"
#include "Gradebook.h"

class University
{
public:
    University();
    University(std::string name, std::string location);
    void addCourse(int id, std::string name);

    Course* getCourse(int id);
    Gradebook* getGradebook();
private:
    std::string name;
    std::string location;

    std::vector<Course> courses;
    Gradebook gradebook;
};

#endif
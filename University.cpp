#include "University.h"

University::University()
    :
    name(""),
    location("")
{}

University::University(std::string name, std::string location)
    :
    name(name),
    location(location)
{}

void University::addCourse(int id, std::string name)
{
    courses.push_back(Course(id, name));
}

Course *University::getCourse(int id)
{
    for (int i = 0; i < courses.size(); i++)
    {
        if (id == courses[i].getId())
        {
            return &courses[i];
        }
    }

    return nullptr;
}

Gradebook *University::getGradebook()
{
    return &gradebook;
}

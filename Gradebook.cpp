#include "Gradebook.h"

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value)
{
    grades.push_back(Grade(assignment, value, stud_id, course_id));
}
#include "Grade.h"

Grade::Grade()
    :
    assignment(""),
    value(-1),
    student_id(-1),
    course_id(-1)
{}

Grade::Grade(std::string assignment, int value, int stud, int course)
    :
    assignment(assignment),
    value(value),
    student_id(stud),
    course_id(course)
{}

#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade
{
public:
    Grade();
    Grade(std::string assignment, int value, int stud, int course);
private:
    std::string assignment;
    int value;
    int student_id; 
    int course_id;
};

#endif
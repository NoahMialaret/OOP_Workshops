#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
#include <vector>
#include "Grade.h"

class Gradebook
{
public:
    void addGrade(int stud_id, int course_id, std::string assignment, int value);
private:
    std::vector<Grade> grades;
};

#endif
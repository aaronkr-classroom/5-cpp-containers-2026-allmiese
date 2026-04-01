#progma once
// grade.h

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include <list>
#include "Student_info.h"

using std::vector;
using std::list;

double grade(double, double, vector<double>&); // const
double grade(double, double, double);
double grade(const Student_info&);

bool fgrade(const Student_info&);
vector<Student_info> extract_fails(vector<Student_info>&);
list<Student_info> extract_fails(list<Student_info>& students);

#endif
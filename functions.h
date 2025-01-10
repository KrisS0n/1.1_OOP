#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Student.h"

void Examination(int& number);
Student* fillingStudents(int& numberStudents);
void printStudentArray(const Student* arr, int numberStudents);
void del(Student*& arr, int& numberStudents);

#endif // FUNCTIONS_H

#include "Student.h"
#include "functions.h"



int main() {
    int numberStudents;

    Student* arr = fillingStudents(numberStudents);
    printStudentArray(arr, numberStudents);
    del(arr, numberStudents);

    return 0;
}

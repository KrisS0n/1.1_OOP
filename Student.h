#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <limits>



class Student {
private:
    std::string lastName;
    std::string firstName;
    std::string middleName;
    int birthYear;
    int course;
    std::string group;

public:
    void setLastName(std::string& lastName){ this->lastName = lastName; }
    void setFirstName(std::string& firstName){ this->firstName = firstName; }
    void setMiddleName(std::string& middleName){ this->middleName = middleName; }
    void setBirthYear(int birthYear){ this->birthYear = birthYear; }
    void setCourse(int course){ this->course = course; }
    void setGroup(std::string& group){ this->group = group; }

    std::string getLastName() const { return lastName; }
    std::string getFirstName() const { return firstName; }
    std::string getMiddleName() const { return middleName; }
    int getBirthYear() const { return birthYear; }
    int getCourse() const { return course; }
    std::string getGroup() const { return group; }
};

#endif // STUDENT_H

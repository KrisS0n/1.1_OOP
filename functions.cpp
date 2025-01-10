#include "functions.h"

void Examination(int& number){
    while (true) {
            std::cout << "Enter an integer: ";

            try {
                std::cin >> number;

                if (!std::cin) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    throw std::runtime_error("Incorrect input! Please enter a number, not a letter.");
                }

                if (std::cin.peek() != '\n') {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    throw std::runtime_error("Incorrect input! Please enter a number without a floating point or space.");
                }

                if (number <= 0) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    throw std::runtime_error("Incorrect input! Please enter a positive number.");
                }

                break;

            } catch (const std::runtime_error& ex) {
                std::cerr << ex.what() << std::endl;
            }
        }
}

Student* fillingStudents(int& numberStudents){
    std::cout << "Enter the number of students: ";
    Examination(numberStudents);

    Student* arr = new Student[numberStudents];
    for(int i=0; i<numberStudents; i++){
        std::string lastName, firstName, middleName, group;
        int birthYear, course;

        std::cout << "Enter student details #" << (i + 1) << std::endl;
        std::cout << "Surname: ";
        std::cin >> lastName;
        std::cout << "Name: ";
        std::cin >> firstName;
        std::cout << "Surname: ";
        std::cin >> middleName;
        std::cout << "Year of birth: ";
        std::cin >> birthYear;
        std::cout << "Course: ";
        std::cin >> course;
        std::cout << "Group: ";
        std::cin >> group;

        arr[i].setLastName(lastName);
        arr[i].setFirstName(firstName);
        arr[i].setMiddleName(middleName);
        arr[i].setBirthYear(birthYear);
        arr[i].setCourse(course);
        arr[i].setGroup(group);
    }
    return arr;
}

void printStudentArray(const Student* arr, int numberStudents) {
    std::cout << "Список студентов:\n";
    for (int i = 0; i < numberStudents; ++i) {
        std::cout << "Студент #" << (i + 1) << ": "
             << arr[i].getLastName() << " "
             << arr[i].getFirstName() << " "
             << arr[i].getMiddleName() << " "
             << arr[i].getBirthYear() << " "
             << arr[i].getCourse() << " "
             << arr[i].getGroup() << std::endl;
    }
}

void del(Student*& arr, int& numberStudents){
    delete [] arr;
    arr = nullptr;
    numberStudents = 0;
}

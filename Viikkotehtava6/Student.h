#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string Name;
    int Age;
public:
    Student(std::string, int);
    void setAge(int);
    void setName(std::string);
    std::string getName();
    int getAge();
    void printStudentInfo();
};

#endif // STUDENT_H

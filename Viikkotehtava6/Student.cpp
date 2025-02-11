#include "Student.h"
#include <iostream>

Student::Student(std::string name, int age)
{
    Student::Name = name;
    Student::Age = age;

    std::cout << "Student constructor called with name: " << name << " and age " << age << std::endl;
}

void Student::setAge(int age)
{
    if (age >= 0)
    {
        Student::Age = age;
        std::cout << "Students " << Student::Name << " age set to " << age << "successfully" << std::endl;
    }
    else
    {
        std::cout << "Error: Age can't be below 0" << std::endl;
    }
}

void Student::setName(std::string name)
{
    if (name.length() > 0)
    {
        std::cout << "Students " << Student::Name << " new name is " << name << std::endl;
        Student::Name = name;
    }
    else
    {
        std::cout << "Error: Name must be more than 0 characters" << std::endl;
    }
}

int Student::getAge()
{
    return Student::Age;
}

std::string Student::getName()
{
    return Student::Name;
}

void Student::printStudentInfo()
{
    std::cout << "Students name is " << Student::Name << " and their age is " << Student::Age << std::endl;
}

#include <iostream>
#include "Student.h"
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            {
                // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
                // Lisää uusi student StudentList vektoriin.
                cout << "Input new students name: ";
                string studentName = "";
                cin >> studentName;
                cout << endl;

                if (studentName.length() > 0)
                {
                    cout << "Input new students age: ";
                    int studentAge = 0;
                    cin >> studentAge;
                    cout << endl;

                    if (studentAge >= 0)
                    {
                        Student newStudent = Student(studentName, studentAge);
                        studentList.push_back(newStudent);
                    }
                    else
                    {
                        cout << "Error: Age can't be below 0" << endl;
                    }
                }
                else
                {
                    cout << "Error: Students name must be more than 0 characters!" << endl;
                }
            }
            break;
        case 1:
            {
                // Tulosta StudentList vektorin kaikkien opiskelijoiden
                // nimet.
                string studentNames = "";
                for (int i = 0; i < studentList.size(); i++) {
                    if (i != 0)
                        studentNames += ", ";
                    studentNames += studentList[i].getName();
                }
                cout << "Student names are: " << studentNames << endl;
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student a, Student b) { // Käytetään lambda expressionia
                return a.getName() < b.getName(); // Compare by name
            });

            for (int i = 0; i < studentList.size(); i++) {
                studentList[i].printStudentInfo();
            }
            break;
        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), [](Student a, Student b) { // Käytetään lambda expressionia
                return a.getAge() < b.getAge(); // Compare by name
            });

            for (int i = 0; i < studentList.size(); i++) {
                studentList[i].printStudentInfo();
            }
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Enter name to find: ";
            string nameToFind = "";
            cin >> nameToFind;
            if (nameToFind.length() > 0)
            {
                auto res = std::find_if(studentList.begin(), studentList.end(), [&nameToFind](Student student) {
                    return student.getName() == nameToFind;
                });

                if (res != studentList.end())
                {
                    cout << "Student " << nameToFind << " found and their full info is:" << endl;
                    res->printStudentInfo();
                }
                else
                {
                    cout << "Error: Student with name " << nameToFind << " not found" << endl;
                }
            }
            else
            {
                cout << "Error: Name length must be more than 0 characters" << endl;
            }
        }
            break;
        default:
            break;
        }
    } while(selection < 5);

    return 0;
}

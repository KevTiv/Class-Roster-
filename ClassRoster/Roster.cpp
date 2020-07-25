//
//  Roster.cpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include "Roster.hpp"
#include "Student.hpp"
#include "Degree.hpp"
#include "SecurityStudent.hpp"
#include "NetworkStudent.hpp"
#include "SoftwareStudent.hpp"

using namespace std;

//Roster constructor
Roster::Roster() {}

//Updating the classRosterArray
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int day1, int day2, int day3, Degree degreeProg) {
    int numberOfDaysToCompleteClass[] = { day1, day2, day3 };
    if (degreeProg == Degree::NETWORK) {
        classRosterArray[addIndex++] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, numberOfDaysToCompleteClass, degreeProg);
    }
    if (degreeProg == Degree::SECURITY) {
        classRosterArray[addIndex++] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, numberOfDaysToCompleteClass, degreeProg);
    }
    if (degreeProg == Degree::SOFTWARE)
    {
        classRosterArray[addIndex++] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, numberOfDaysToCompleteClass, degreeProg);
    }
}

//printing entire roster
void Roster::printAll() {
    cout << "Student roster:";
    cout << endl;
    for (int i = 0; i < 5; i++) {
        (*classRosterArray[i]).print();
    }
    cout <<"Print all complete"<< endl;
}

//printing the average days it took to complete 3 courses
void Roster::printnumberOfDays(string studentID) {
    for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++)
    {
        if ((*classRosterArray[i]).getStudentID() == studentID)
        {
            int average = 0;
            average = ((*classRosterArray[i]).getNumDays()[0] + (*classRosterArray[i]).getNumDays()[1]
                + (*classRosterArray[i]).getNumDays()[2]) / 3;
            cout << "It took an average of " << average << " days for the student (" << studentID <<") to complete 3 classes"<<endl;
        }
    }
}

// Printing studnts who are in a specific degree program
void Roster::printByDegreeProgram(string degree) {
     Degree testDeg = Degree::NONE;

    cout << "Displaying students in the Security degree: " << endl;
    testDeg = Degree::SECURITY;
    for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++)
       {
           if (testDeg == (*classRosterArray[i]).getDegree() || degree == "SECURITY")
           {
               (*classRosterArray[i]).print();
           }
       }
    
    cout << "Displaying students in the Network degree: " << endl;
    testDeg = Degree::NETWORK;
    for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++)
       {
           if (testDeg == (*classRosterArray[i]).getDegree() || degree == "NETWORK")
           {
               (*classRosterArray[i]).print();
           }
       }
    
    cout << "Displaying students in the Software degree: " << endl;
       testDeg = Degree::SOFTWARE;
       for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++)
       {
           if (testDeg == (*classRosterArray[i]).getDegree() || (degree == "SOFTWARE"))
           {
               (*classRosterArray[i]).print();
           }
       }
    
    cout << endl;
}

// Checking Emails and displayign invalid ones
void Roster::printInvalidEmails() {
    cout << endl;
    cout << "--Displaying invalid emails:" <<endl;
    cout << endl;
    for (int i = 0; i < 5; i++) {
        bool foundCharAt = false;
        bool foundCharPeriod = false;
        bool foundCharSpace = false;
        string email = "";
        email = (*classRosterArray[i]).getEmailAddress();
        for (char &c : email) {
            if (c == '@') {
                foundCharAt = true;
            }
            if (c == '.') {
                foundCharPeriod = true;
            }
            if (c == ' ') {
                foundCharSpace = true;
            }
        }
        if (foundCharAt == false || foundCharPeriod == false || foundCharSpace == true) {
            cout << (*classRosterArray[i]).getEmailAddress() << endl;
        }
    }
    cout << endl;
}

// Removing student from the roster by Student ID
void Roster::remove(string studentID) {
    bool removed = false;
    for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
        if (classRosterArray[i] != NULL) {
            if (studentID == classRosterArray[i]->getStudentID()) {
                classRosterArray[i] = nullptr;
                removed = true;
                cout<<"Student "<<studentID<<" was removed successfully."<<endl;
            }
        }
    }
    if (!removed) {
        cout << "The student with the ID: " << studentID << " was not found." <<endl;
    }
}

//Deconstructor
Roster::~Roster()
{
    cout << endl;
    cout << "-- ~Roster() called"<<endl;
}

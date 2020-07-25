//
//  SecurityStudent.cpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#include "SecurityStudent.hpp"
#include <iostream>

SecurityStudent::SecurityStudent() {}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int *nmbrOfDays, Degree degreeProgram) : Student(studentID, firstName, lastName, emailAddress, age, nmbrOfDays)
{
    degree = degreeProgram;
}

Degree SecurityStudent::getDegree()
{
    return degree;
}

void SecurityStudent::print()
{
    cout << "First Name: " << getFirstName() << "\t" << "Last Name: "<< getLastName() << "\t" << "Age: " << getAge() << "\t" << "Days in course: ";
    cout << getNumDays()[0] << ", " << getNumDays()[1] << ", " << getNumDays()[2];
    cout << " Degree Program: Security" <<endl;
}

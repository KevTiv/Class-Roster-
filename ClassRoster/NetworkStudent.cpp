//
//  NetworkStudent.cpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#include "NetworkStudent.hpp"
#include <iostream>
using namespace std;

NetworkStudent::NetworkStudent() {}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int *nmbrOfDays, Degree degreeProgram) : Student(studentID, firstName, lastName, emailAddress, age, nmbrOfDays)
{
    degree = degreeProgram;
}

Degree NetworkStudent::getDegree()
{
    return degree;
}

void NetworkStudent::print()
{
    cout << "First Name: " << getFirstName() << "\t" << "Last Name: "<< getLastName() << "\t" << "Age: " << getAge() << "\t" << "Days in course: ";
    cout << getNumDays()[0] << ", " << getNumDays()[1] << ", " << getNumDays()[2];
    cout << " Degree Program: Networking" <<endl;
}

//
//  Student.cpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#include "Student.hpp"
#include <iostream>
#include "Student.hpp"
#include "Degree.hpp"
#include <string>
using namespace std;

// default constructor
Student::Student()
{

}
//Constructor
Student::Student(string studID, string frstName, string lstName, string emAddress, int Age, int* nmbrDays)
{
    studentID = studID;
    firstName = frstName;
    lastName = lstName;
    emailAddress = emAddress;
    age = Age;
    numberOfDays[0] = nmbrDays[0];
    numberOfDays[1] = nmbrDays[1];
    numberOfDays[2] = nmbrDays[2];
}
//Accessor
string Student::getFirstName()
{
    return firstName;
}

string Student::getLastName()
{
    return lastName;
}

string Student::getEmailAddress()
{
    return emailAddress;
}

int Student::getAge()
{
    return age;
}

int *Student::getNumDays() {
    return numberOfDays;
}

string Student::getStudentID() {
    return studentID;
}

Degree Student::getDegree()
{
    return degreeProgram;
}
//Mutators
void Student::setFirstName(string frstName)
{
    firstName = frstName;
}

void Student::setLastName(string lstName)
{
    lastName = lstName;
}

void Student::setEmailAddress(string emAddress)
{
    emailAddress = emAddress;
}

void Student::setAge(int Age)
{
    age = Age;
}

void Student::setStudentID(string studentID) {
    Student::studentID = studentID;
}

void Student::setNumDays(int day0, int day1, int day2)
{
    Student::numberOfDays[0] = day0;
    Student::numberOfDays[1] = day1;
    Student::numberOfDays[2] = day2;
}

void Student::setDegree(string degree)
{
    if(degree == "SECURITY")
    {
        degreeProgram = Degree::SECURITY;
    }
    if(degree == "SOFTWARE")
       {
           degreeProgram = Degree::SOFTWARE;
       }
    if(degree == "NETWORK")
       {
           degreeProgram = Degree::NETWORK;
       }
}

 void Student::print() {}

// default deconstructor definition
Student::~Student()
{

}

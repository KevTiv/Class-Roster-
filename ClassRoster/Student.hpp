//
//  Student.hpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
#include "Degree.hpp"
using namespace std;

class Student
{

public:

    //constructor
    Student();

    // FIXME*** Student(string studID, string fiName, string laName, string emAddr, int a, int* nmDays);
    Student(string, string, string, string, int, int*);

    //accessors for each instance variable
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    string getStudentID();
    int getAge();
    int *getNumDays();
    

    //mutator for each instance variable
    void setFirstName(string);
    void setLastName(string);
    void setEmailAddress(string);
    void setAge(int);
    void setStudentID(string);
    void setNumDays(int ,int ,int );
    void setDegree(string);
    
    virtual void print();
    virtual Degree getDegree();

    //Deconstructor
    ~Student();

private:

    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int numberOfDays[3];
    Degree degreeProgram;
};

#endif /* Student_hpp */

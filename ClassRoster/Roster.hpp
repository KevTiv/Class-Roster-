//
//  Roster.hpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#ifndef Roster_hpp
#define Roster_hpp

#include <stdio.h>
#include "Student.hpp"
#include <array>

class Roster {
public:
    Roster();

    virtual ~Roster();

    void add(string, string, string, string, int, int, int, int, Degree);

    void printAll();

    void printnumberOfDays(string);
    
    void printInvalidEmails();
    
    void printByDegreeProgram(string);

    void remove(string);

    int addIndex = 0;

private:

    // Declaring array of pointers
    Student *classRosterArray[5];
};
#endif /* Roster_hpp */

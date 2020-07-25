//
//  SecurityStudent.hpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#ifndef SecurityStudent_hpp
#define SecurityStudent_hpp

#include <stdio.h>
#include "Student.hpp"

class SecurityStudent : public Student {
public:
    SecurityStudent();

    SecurityStudent(string, string, string, string, int, int*, Degree);

    Degree getDegree() override;

    void print() override;
private:
    Degree degree;
};

#endif /* SecurityStudent_hpp */

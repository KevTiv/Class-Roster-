//
//  SoftwareStudent.hpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#ifndef SoftwareStudent_hpp
#define SoftwareStudent_hpp

#include <stdio.h>
#include "Student.hpp"

class SoftwareStudent : public Student {
public:
    SoftwareStudent();

    SoftwareStudent(string, string, string, string, int, int*, Degree);

    Degree getDegree() override;

    void print() override;
private:
    Degree degree;
};
#endif /* SoftwareStudent_hpp */

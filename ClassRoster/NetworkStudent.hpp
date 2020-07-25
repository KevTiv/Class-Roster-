//
//  NetworkStudent.hpp
//  ClassRoster
//
//  Created by Kevin Tivert on 6/11/20.
//
//Scripting and Programming - Applications C867
//Student ID# :001372496

#ifndef NetworkStudent_hpp
#define NetworkStudent_hpp

#include <stdio.h>
#include "Student.hpp"

class NetworkStudent : public Student {
public:
    NetworkStudent();

    NetworkStudent(string, string, string, string, int, int*, Degree);

    Degree getDegree() override;

    void print() override;


private:
    Degree degree;
};

#endif /* NetworkStudent_hpp */

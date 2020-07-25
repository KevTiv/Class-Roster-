//
//  main.cpp
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

int main()
{
   
    
    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Kevin,Tivert,ktiver1@wgu.edu,24,30,8,14,SOFTWARE"
    };

    //Creating Roster Instance
    Roster classRoster;

    // Creating Degree Instance
    Degree myDegree = Degree::NONE;
    
    // adding each student to the classRoster
    cout<<"Add function called."<<endl;
    for (int i = 0; i < 5; i++) {
        stringstream INPUT(studentData[i]);

        vector<string> result;

        while (INPUT.good()) {
            string substr;
            getline(INPUT, substr, ',');
            result.push_back(substr);
        }
        if (result[8] == "NETWORK")
        {
            myDegree = Degree::NETWORK;
        }
        if (result[8] == "SECURITY")
        {
            myDegree = Degree::SECURITY;
        }
        if (result[8] == "SOFTWARE")
        {
            myDegree = Degree::SOFTWARE;
        }
        classRoster.add(result[0], result[1], result[2], result[3], stoi(result[4]), stoi(result[5]),
        stoi(result[6]), stoi(result[7]), myDegree);
    }
    
    

    //print out Personal Info
    cout << "Scripting and Programming - Applications C867 ";
    cout << "C++" << endl;
    cout << "Kevin Tivert, ";
    cout << "Student ID# :001372496" << endl;
    cout << endl;
    cout << endl;

    // printing all results
    cout << endl;
    cout << "--PrintAll() called"<<endl;
    classRoster.printAll();
    
    cout << endl;
    cout << "--PrintInvalidEmails() called"<<endl;
    classRoster.printInvalidEmails();
    
    cout << endl;
    cout << "--PrintNumberOfDays() called"<<endl;
    classRoster.printnumberOfDays("A1");
    
    cout << endl;
    cout << "--PrintByDegree() called"<<endl;
    classRoster.printByDegreeProgram("SOFTWARE");
    
    cout << endl;
    cout << "--Remove() called"<<endl;
    classRoster.remove("A3");
    
    cout << endl;
    cout << "--Remove() called"<<endl;
    classRoster.remove("A3");
    
    return 0;
}

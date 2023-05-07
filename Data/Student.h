//
// Created by Caio on 17/11/2022.
//

#ifndef SISTEMADETCC_STUDENT_H
#define SISTEMADETCC_STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    string enrollment;
    string course;
    string email;
public:
    Student();
    Student(string name, string enrollment, string course, string email);
    string getName();
    void setName(string name);
    string getEnrollment();
    void setEnrollment(string enrollment);
    string getCourse();
    void setCourse(string course);
    string getEmail();
    void setEmail(string email);
};


#endif //SISTEMADETCC_STUDENT_H

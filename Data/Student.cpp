//
// Created by Caio on 17/11/2022.
//

#include "Student.h"


Student::Student() {
}
Student::Student(string name, string enrollment, string course, string email){
    this->name = name;
    this->enrollment = enrollment;
    this->course = course;
    this->email = email;
}
string Student::getName(){
    return name;
}
void Student::setName(string name){
    this->name = name;
}
string Student::getEnrollment(){
    return enrollment;
}
void Student::setEnrollment(string enrollment){
    this->enrollment = enrollment;
}
string Student::getCourse(){
    return course;
}
void Student::setCourse(string course){
    this->course = course;
}
string Student::getEmail(){
    return email;
}
void Student::setEmail(string email){
    this->email = email;
}
//
// Created by Caio on 17/11/2022.
//

#include "Student.h"


Student::Student() {
}
Student::Student(string name, string matricula, string course, string email){
    this->name = name;
    this->matricula = matricula;
    this->course = course;
    this->email = email;
}
string Student::getName(){
    return name;
}
void Student::setName(string name){
    this->name = name;
}
string Student::getMatricula(){
    return matricula;
}
void Student::setMatricula(string matricula){
    this->matricula = matricula;
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
//
// Created by Caio on 17/11/2022.
//

#include "Evaluator.h"

Evaluator::Evaluator() {
}

Evaluator::Evaluator(string name, string institutes, string email){
    this->name = name;
    this->institutes = institutes;
    this->email = email;
}
string Evaluator::getName(){
    return name;
}
void Evaluator::setName(string name){
    this->name = name;
}
string Evaluator::getInstitutes(){
    return institutes;
}
void Evaluator::setInstitutes(string institutes){
    this->institutes = institutes;
}
string Evaluator::getEmail(){
    return email;
}
void Evaluator::setEmail(string email){
    this->email = email;
}
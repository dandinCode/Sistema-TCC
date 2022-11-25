//
// Created by Caio on 17/11/2022.
//

#include "Advisor.h"

Advisor::Advisor(){
}

Advisor::Advisor(string name){
this->name = name;
}

string Advisor::getName(){
    return name;
}

void Advisor::setName(string name){
    this->name = name;
}


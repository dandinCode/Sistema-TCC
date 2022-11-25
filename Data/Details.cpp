//
// Created by Caio on 18/11/2022.
//

#include "Details.h"

Details::Details() {
}

Details::Details(string title, string abstract, string time, string local){
    this->title = title;
    this->abstract = abstract;
    this->time = time;
    this->local = local;
}

string Details::getTitle(){
    return title;
}

void Details::setTitle(string title){
    this->title = title;
}

string Details::getAbstract(){
    return abstract;
}

void Details::setAbstract(string abstract){
    this->abstract = abstract;
}

string Details::getTime(){
    return time;
}

void Details::setTime(string time){
    this->time = time;
}

string Details::getLocal(){
    return local;
}

void Details::setLocal(string local){
    this->local = local;
}
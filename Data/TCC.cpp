//
// Created by Caio on 18/11/2022.
//

#include "TCC.h"

TCC::TCC(){
}
TCC::TCC(Student student, Advisor advisor, Frequency frequency, Evaluator evaluator, Details details){
    this->student = student;
    this->advisor = advisor;
    this->frequency = frequency;
    this->evaluator = evaluator;
    this->details = details;
}

Student TCC::getStudent() {
    return student;
}

void TCC::setStudent(Student student){
    this->student = student;
}

Advisor TCC::getAdvisor(){
    return advisor;
}

void TCC::setAdvisor(Advisor advisor){
    this->advisor = advisor;
}

Frequency TCC::getFrequency(){
    return frequency;
}

void TCC::setFrequency(Frequency frequency){
    this->frequency = frequency;
}

Evaluator TCC::getEvaluator(){
    return evaluator;
}

void TCC::setEvaluator(Evaluator evaluator){
    this->evaluator = evaluator;
}

Details TCC::getDetails(){
    return details;
}

void TCC::setDetails(Details details){
    this->details = details;
}

int TCC::listSize(){
    return ListTCC.size();
}

vector <TCC> TCC::ListTCC;
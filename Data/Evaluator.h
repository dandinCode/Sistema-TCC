//
// Created by Caio on 17/11/2022.
//

#ifndef SISTEMADETCC_EVALUATOR_H
#define SISTEMADETCC_EVALUATOR_H

#include <string>
#include <iostream>

using namespace std;

class Evaluator {
private:
    string name;
    string institutes;
    string email;
public:
    Evaluator();
    Evaluator(string name, string institutes, string email);
    string getName();
    void setName(string name);
    string getInstitutes();
    void setInstitutes(string institutes);
    string getEmail();
    void setEmail(string email);
};


#endif //SISTEMADETCC_EVALUATOR_H

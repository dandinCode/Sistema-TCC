//
// Created by Caio on 17/11/2022.
//

#ifndef SISTEMADETCC_ADVISOR_H
#define SISTEMADETCC_ADVISOR_H

#include <string>
#include <iostream>

using namespace std;

class Advisor {
private:
    string name;
public:
    Advisor();
    Advisor(string name);
    string getName();
    void setName(string name);
};


#endif //SISTEMADETCC_ADVISOR_H

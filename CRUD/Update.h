//
// Created by Caio on 20/11/2022.
//

#ifndef SISTEMADETCC_UPDATE_H
#define SISTEMADETCC_UPDATE_H

#include "../Data/TCC.h"
#include "Search.h"
#include "Register.h"
#include "../Menu.h"

class Update : public TCC {
private:
    int option;
public:
    Update();
    void chooseOption();
    void valideOption(int option);
    void editStudent();
    void editAdvisor();
    void editFrequency();
    void editEvaluator();
    void editDetails();
};


#endif //SISTEMADETCC_UPDATE_H
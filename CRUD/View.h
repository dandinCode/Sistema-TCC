//
// Created by Caio on 18/11/2022.
//

#ifndef SISTEMADETCC_VIEW_H
#define SISTEMADETCC_VIEW_H

#include "../Data/TCC.h"
#include "Search.h"

class View : public TCC{
private:
    int option;
public:
    View();
    void chooseOption();
    void valideOption(int option);
    void printStudent(TCC banca);
    void printAdvisor(TCC banca);
    void printFrequency(TCC banca);
    void printEvaluator(TCC banca);
    void printDetails(TCC banca);
    void printTCC(TCC banca);
    void viewTCC();
    void viewAllTCC();

};


#endif //SISTEMADETCC_VIEW_H

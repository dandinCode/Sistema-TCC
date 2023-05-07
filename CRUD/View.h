//
// Created by Caio on 18/11/2022.
//

#ifndef SISTEMADETCC_VIEW_H
#define SISTEMADETCC_VIEW_H

#include "../Data/TCC.h"
#include "Search.h"
#include "../JSON/json.hpp"

class View : public TCC{
private:
    int option;
public:
    View();
    void chooseOption();
    void valideOption(int option);
    void printStudent(const json& jsonObj);
    void printAdvisor(const json& jsonObj);
    void printFrequency(const json& jsonObj);
    void printEvaluator(const json& jsonObj);
    void printDetails(const json& jsonObj);
    void printTCC(const json& jsonObj);
    void viewTCC();
    void viewAllTCC();
    json getJsonArray();

};


#endif //SISTEMADETCC_VIEW_H

//
// Created by Caio on 20/11/2022.
//

#ifndef SISTEMADETCC_UPDATE_H
#define SISTEMADETCC_UPDATE_H

#include "../Data/TCC.h"
#include "Search.h"
#include "Register.h"
#include "../Menu.h"
#include "../JSON/json.hpp"

class Update : public TCC {
private:
    int option;
public:
    Update();
    void chooseOption();
    void valideOption(int option, json& jsonData, string title, ManipulateJson manipulateJson);
    void editJsonFile(int option);
    void editStudent(json& jsonData, string title, ManipulateJson manipulateJson);
    void editAdvisor(json& jsonData, string title, ManipulateJson manipulateJson);
    void editFrequency(json& jsonData, string title, ManipulateJson manipulateJson);
    void editEvaluator(json& jsonData, string title, ManipulateJson manipulateJson);
    void editDetails(json& jsonData, string title, ManipulateJson manipulateJson);
    json getJsonArray();
};


#endif //SISTEMADETCC_UPDATE_H
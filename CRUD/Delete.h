//
// Created by Caio on 20/11/2022.
//

#ifndef SISTEMADETCC_DELETE_H
#define SISTEMADETCC_DELETE_H

#include "../Data/TCC.h"
#include "Search.h"

class Delete : public TCC{
private:
    string title;
public:
    void selectTCC();
    void deleteTCC(json& jsonData);
    json getJsonArray();
};


#endif //SISTEMADETCC_DELETE_H

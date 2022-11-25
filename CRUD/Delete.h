//
// Created by Caio on 20/11/2022.
//

#ifndef SISTEMADETCC_DELETE_H
#define SISTEMADETCC_DELETE_H

#include "../Data/TCC.h"
#include "Update.h"

class Delete : public TCC{
private:
    string title;
public:
    Delete();
    void selectTCC();
    void deleteTCC(string title);
};


#endif //SISTEMADETCC_DELETE_H

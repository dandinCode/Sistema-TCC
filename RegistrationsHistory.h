//
// Created by Caio on 26/12/2022.
//

#ifndef SISTEMADETCC_REGISTRATIONSHISTORY_H
#define SISTEMADETCC_REGISTRATIONSHISTORY_H

#include "fstream"

#include "Data/TCC.h"

class RegistrationsHistory {
private:
    int TccNumber = 0;
public:
    void addInHistory(TCC tcc);
    void addStudent(TCC tcc);
    void addAdvisor(TCC tcc);
    void addFrequency(TCC tcc);
    void addEvaluator(TCC tcc);
    void addDetails(TCC tcc);
    void viewTotalRecords();
};


#endif //SISTEMADETCC_REGISTRATIONSHISTORY_H

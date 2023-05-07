//
// Created by Caio on 26/12/2022.
//

#ifndef SISTEMADETCC_REGISTRATIONSHISTORY_H
#define SISTEMADETCC_REGISTRATIONSHISTORY_H

#include "fstream"

#include "Data/TCC.h"

class RegistrationsHistory {
public:
    void addInHistory(TCC tcc);
    void addStudent(TCC tcc, ofstream& file);
    void addAdvisor(TCC tcc, ofstream& file);
    void addFrequency(TCC tcc, ofstream& file);
    void addEvaluator(TCC tcc, ofstream& file);
    void addDetails(TCC tcc, ofstream& file);
};


#endif //SISTEMADETCC_REGISTRATIONSHISTORY_H

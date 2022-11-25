//
// Created by Caio on 17/11/2022.
//

#ifndef SISTEMADETCC_FREQUENCY_H
#define SISTEMADETCC_FREQUENCY_H

#include <string>
#include <iostream>

using namespace std;

class Frequency {
private:
    double percentage;
public:
    Frequency();
    Frequency(double percentage);
    double getPercentage();
    void setPercentage(double percentage);
};


#endif //SISTEMADETCC_FREQUENCY_H

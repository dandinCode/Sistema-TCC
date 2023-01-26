//
// Created by Caio on 18/11/2022.
//

#ifndef SISTEMADETCC_REGISTER_H
#define SISTEMADETCC_REGISTER_H

#include "../Data/TCC.h"
#include "../RegistrationsHistory.h"

class Register : public TCC {
public:
    void tccRegister();
    Student studentRegister();
    Advisor advisorRegister();
    Frequency frequencyRegister();
    Evaluator evaluatorRegister();
    Details detailsRegister();
};


#endif //SISTEMADETCC_REGISTER_H

//
// Created by Caio on 18/11/2022.
//

#ifndef SISTEMADETCC_TCC_H
#define SISTEMADETCC_TCC_H

#include "Advisor.h"
#include "Details.h"
#include "Evaluator.h"
#include "Frequency.h"
#include "Student.h"

#include "vector"

using namespace std;

class TCC {
private:
    Student student;
    Advisor advisor;
    Frequency frequency;
    Evaluator evaluator;
    Details details;
public:
    TCC();
    TCC(Student student, Advisor advisor, Frequency frequency, Evaluator evaluator, Details details);
    Student getStudent();
    Advisor getAdvisor();
    Frequency getFrequency();
    Evaluator getEvaluator();
    Details getDetails();
    void setStudent(Student student);
    void setAdvisor(Advisor advisor);
    void setFrequency(Frequency frequency);
    void setEvaluator(Evaluator evaluator);
    void setDetails( Details details);
};


#endif //SISTEMADETCC_TCC_H

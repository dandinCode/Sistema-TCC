//
// Created by Caio on 19/05/2023.
//

#ifndef SISTEMADETCC_MANIPULATEJSON_H
#define SISTEMADETCC_MANIPULATEJSON_H

#include "fstream"

#include "Data/TCC.h"
#include "json.hpp"

using json = nlohmann::ordered_json;

class ManipulateJson : public TCC {
public:
    void saveDataInJson(TCC tcc);
    json convertTccToJson(TCC tcc);
    json convertStudentToJson(Student student);
    json convertAdvisorToJson(Advisor advisor);
    json convertFrequencyToJson(Frequency frequency);
    json convertEvaluatorToJson(Evaluator evaluator);
    json convertDetailsToJson(Details details);
    json getJsonArray();
};


#endif //SISTEMADETCC_MANIPULATEJSON_H

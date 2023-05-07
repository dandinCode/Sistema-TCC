//
// Created by Caio on 19/05/2023.
//

#include "ManipulateJson.h"

void ManipulateJson::saveDataInJson(TCC tcc){
    std::ifstream file("../JSON/tccDATA.json");
    json jsonData;
    file >> jsonData;

    json jsonArray = json::array();
    for (const auto& item : jsonData.items()) {
        jsonArray.push_back(item.value());
    }

    jsonArray.push_back(convertTccToJson(tcc));
    std::ofstream outputFile("../JSON/tccDATA.json");
    outputFile << jsonArray.dump(4);
}

json ManipulateJson::convertTccToJson(TCC tcc) {
    json tccJsonObj = {
            {"Dados do estudante", convertStudentToJson(tcc.getStudent())},
            {"Orientador", convertAdvisorToJson(tcc.getAdvisor())},
            {"Frequencia", convertFrequencyToJson(tcc.getFrequency())},
            {"Banca avaliadora", convertEvaluatorToJson(tcc.getEvaluator())},
            {"Dados da banca", convertDetailsToJson(tcc.getDetails())}
    };
    return tccJsonObj;
}


json ManipulateJson::convertStudentToJson(Student student){
    json jsonStudent = {
            {"Nome do aluno", student.getName()},
            {"Enrollment", student.getEnrollment()},
            {"Curso", student.getCourse()},
            {"E-mail", student.getEmail()}
    };

    return jsonStudent;
}

json ManipulateJson::convertAdvisorToJson(Advisor advisor){
    json jsonAdvisor = {
            {"Orientador", advisor.getName()}
    };

    return jsonAdvisor;
}

json ManipulateJson::convertFrequencyToJson(Frequency frequency){
    json jsonFrequency = {
            {"Frequencia", frequency.getPercentage()}
    };

    return jsonFrequency;
}

json ManipulateJson::convertEvaluatorToJson(Evaluator evaluator){
    json jsonEvaluator = {
            {"Nome do avaliador", evaluator.getName()},
            {"Instituicao", evaluator.getInstitutes()},
            {"E-mail do avaliador", evaluator.getEmail()}
    };
    return jsonEvaluator;
}

json ManipulateJson::convertDetailsToJson(Details details){
    json jsonDetails = {
            {"Titulo do TCC", details.getTitle()},
            {"Resumo do TCC", details.getAbstract()},
            {"Horario da defesa", details.getTime()},
            {"Local da defesa", details.getLocal()}
    };
    return jsonDetails;
}

json ManipulateJson::getJsonArray() {
    ifstream file("../JSON/tccDATA.json");
    string conteudo((istreambuf_iterator<char>(file)),istreambuf_iterator<char>());
    json jsonData = json::parse(conteudo);
    file.close();
    return jsonData;
}
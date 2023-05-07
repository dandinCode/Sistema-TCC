//
// Created by Caio on 20/11/2022.
//

#include "Update.h"

Update::Update() {
    cout << " ======= Atualizar Banca ======= " << endl;
    cout << "Editar dados de Aluno           [1]" << endl;
    cout << "Editar dados do Orientador      [2]" << endl;
    cout << "Editar frequencia               [3]" << endl;
    cout << "Editar dados dos Avaliadores    [4]" << endl;
    cout << "Editar detalhes do TCC          [5]" << endl;
    cout << "Voltar ao menu                  [0]" << endl;
}

void Update::chooseOption() {
    cout << "Digite a opcao desejada: " << endl;
    cin >> option;
    editJsonFile(option);

}

void Update::valideOption(int option, json& jsonData, string title, ManipulateJson manipulateJson) {
    if(option == 1){
        editStudent(jsonData, title, manipulateJson);
    } else if(option == 2){
        editAdvisor(jsonData, title, manipulateJson);
    } else if(option == 3){
        editFrequency(jsonData, title, manipulateJson);
    } else if(option == 4){
        editEvaluator(jsonData, title, manipulateJson);
    } else if(option == 5){
        editDetails(jsonData, title, manipulateJson);
    } else if (option == 0){
        Menu menu;
        menu.chooseOption();
    } else {
        cout << "Opcao inexistente!" << endl;
    }
}

void Update::editJsonFile(int option){
    Search search;
    ManipulateJson manipulateJson;
    string title = search.selectTitle();
    json jsonData = getJsonArray();

    if(search.valideSearch(title)){
        valideOption(option, jsonData, title, manipulateJson);
    }   else{
        cout << "TCC inexistente!" << endl;
    }


    ofstream outFile("../JSON/tccDATA.json");
    if (!outFile.is_open()) {
        std::cout << "Erro ao abrir o arquivo JSON para escrita." << std::endl;
    }
    outFile << setw(4) << jsonData;
    outFile.close();
}

void Update::editStudent(json& jsonData, string title, ManipulateJson manipulateJson){
    Register studentUpdate;
    for (int i = 0; i<jsonData.size(); i++){
        if (jsonData[i]["Dados da banca"]["Titulo do TCC"] == title){
            jsonData[i]["Dados do estudante"] = manipulateJson.convertStudentToJson(studentUpdate.studentRegister());
        }
    }
}

void Update::editAdvisor(json& jsonData, string title, ManipulateJson manipulateJson){
    Register advisorUpdate;
    for (int i = 0; i<jsonData.size(); i++){
        if (jsonData[i]["Dados da banca"]["Titulo do TCC"] == title){
            jsonData[i]["Orientador"] = manipulateJson.convertAdvisorToJson(advisorUpdate.advisorRegister());
        }
    }
}

void Update::editFrequency(json& jsonData, string title, ManipulateJson manipulateJson){
    Register frequencyUpdate;
    for (int i = 0; i<jsonData.size(); i++){
        if (jsonData[i]["Dados da banca"]["Titulo do TCC"] == title){
            jsonData[i]["Frequencia"] = manipulateJson.convertFrequencyToJson(frequencyUpdate.frequencyRegister());
        }
    }
}

void Update::editEvaluator(json& jsonData, string title, ManipulateJson manipulateJson){
    Register evaluatorUpdate;
    for (int i = 0; i<jsonData.size(); i++){
        if (jsonData[i]["Dados da banca"]["Titulo do TCC"] == title){
            jsonData[i]["Banca avaliadora"] = manipulateJson.convertEvaluatorToJson(evaluatorUpdate.evaluatorRegister());
        }
    }
}

void Update::editDetails(json& jsonData, string title, ManipulateJson manipulateJson){
    Register detailsUpdate;
    for (int i = 0; i<jsonData.size(); i++){
        if (jsonData[i]["Dados da banca"]["Titulo do TCC"] == title){
            jsonData[i]["Dados da banca"] = manipulateJson.convertDetailsToJson(detailsUpdate.detailsRegister());
        }
    }
}

json Update::getJsonArray() {
    ManipulateJson manipulateJson;
    return manipulateJson.getJsonArray();
}
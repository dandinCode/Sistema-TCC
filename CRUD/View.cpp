//
// Created by Caio on 18/11/2022.
//

#include "View.h"

View::View(){
    cout << "--- Exibicao de TCC ---" << endl;
    cout << "Visualizar todas as bancas     [1]" << endl;
    cout << "Visualizar banca especifica    [2]" << endl;
    cout << "Voltar ao menu                 [0]" << endl;
}

void View::chooseOption() {
    cout << "Digite a opcao desejada: " << endl;
    cin >> option;
    valideOption(option);
}

void View::valideOption(int option) {
    if(option == 1){
        viewAllTCC();
    } else if(option == 2){
        viewTCC();
    } else if (option == 0){
        Menu menu;
        menu.chooseOption();
    } else {
        cout << "Opcao inexistente!" << endl;
    }
}

void View::printStudent(const json& jsonObj){
    cout << " - Aluno -" << endl;
    cout << " | Nome: " << jsonObj["Dados do estudante"]["Nome do aluno"];
    cout << " | Matricula: " << jsonObj["Dados do estudante"]["Enrollment"];
    cout << " | Curso: " << jsonObj["Dados do estudante"]["Curso"];
    cout << " | E-mail: " << jsonObj["Dados do estudante"]["E-mail"] << " |\n" << endl;
}

void View::printAdvisor(const json& jsonObj){
    cout << " - Orientador - " << endl;
    cout << " | Nome: " << jsonObj["Orientador"]["Orientador"] << " |\n" << endl;
}

void View::printFrequency(const json& jsonObj){
    cout << " - Frequencia - " << endl;
    cout << " | Frequencia: " << jsonObj["Frequencia"]["Frequencia"] << " |\n" << endl;
}

void View::printEvaluator(const json& jsonObj){
    cout << " - Avaliador - " << endl;
    cout << " | Nome: " << jsonObj["Banca avaliadora"]["Nome do avaliador"];
    cout << " | Instituicao: " << jsonObj["Banca avaliadora"]["Instituicao"];
    cout << " | E-mail: " << jsonObj["Banca avaliadora"]["E-mail do avaliador"] << " |\n" << endl;
}

void View::printDetails(const json& jsonObj){
    cout << " - Detalhes da Banca - " << endl;
    cout << " | Title: " << jsonObj["Dados da banca"]["Titulo do TCC"];
    cout << " | Resumo: " << jsonObj["Dados da banca"]["Resumo do TCC"];
    cout << " | Horario: " << jsonObj["Dados da banca"]["Horario da defesa"];
    cout << " | Local: " << jsonObj["Dados da banca"]["Local da defesa"] << " |\n" << endl;
}

void View::printTCC(const json& jsonObj){
    cout << "------------------------------------------------" << endl;
    printStudent(jsonObj);
    printAdvisor(jsonObj);
    printFrequency(jsonObj);
    printEvaluator(jsonObj);
    printDetails(jsonObj);
}

void View::viewTCC(){
    Search search;
    string title = search.selectTitle();
    if(search.valideSearch(title)){
        printTCC(search.searchTCC(title));
    }   else{
        cout << "TCC inexistente!" << endl;
    }
}

void View::viewAllTCC(){
    json jsonData = getJsonArray();
    for (int i = 0; i<jsonData.size(); i++){
        printTCC(jsonData[i]);
    }
}

json View::getJsonArray() {
    ManipulateJson manipulateJson;
    return manipulateJson.getJsonArray();
}
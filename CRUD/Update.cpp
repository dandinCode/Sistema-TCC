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
    valideOption(option);
}

void Update::valideOption(int option) {
    if(option == 1){
        editStudent();
    } else if(option == 2){
        editAdvisor();
    } else if(option == 3){
        editFrequency();
    } else if(option == 4){
        editEvaluator();
    } else if(option == 5){
        editDetails();
    } else if (option == 0){
        Menu menu;
        menu.chooseOption();
    } else {
        cout << "Opcao inexistente!" << endl;
    }
}

void Update::editStudent(){
    Search search;
    Register studentUpdate;
    string title = search.selectTitle();
    if (search.valideSearch(title)){
        TCC tcc = search.searchTCC(title);
        int position = search.searchTCCPosition(tcc.getDetails().getTitle());
        tcc.setStudent(studentUpdate.studentRegister());

        ListTCC.erase(ListTCC.begin()+position);
        ListTCC.insert(ListTCC.begin() + position, tcc);
    } else{
        cout << "TCC inexistente!" << endl;
    }

}

void Update::editAdvisor(){
    Search search;
    Register advisorUpdate;
    string title = search.selectTitle();

    if(search.valideSearch(title)){
        TCC tcc = search.searchTCC(title);
        int position = search.searchTCCPosition(tcc.getDetails().getTitle());
        tcc.setAdvisor(advisorUpdate.advisorRegister());

        ListTCC.erase(ListTCC.begin()+position);
        ListTCC.insert(ListTCC.begin() + position, tcc);
    } else{
        cout << "TCC inexistente!" << endl;
    }
}

void Update::editFrequency(){
    Search search;
    Register frequencyUpdate;
    string title = search.selectTitle();

    if(search.valideSearch(title)){
        TCC tcc = search.searchTCC(title);
        int position = search.searchTCCPosition(tcc.getDetails().getTitle());
        tcc.setFrequency(frequencyUpdate.frequencyRegister());

        ListTCC.erase(ListTCC.begin()+position);
        ListTCC.insert(ListTCC.begin() + position, tcc);
    } else{
        cout << "TCC inexistente!" << endl;
    }
}

void Update::editEvaluator(){
    Search search;
    Register evaluatorUpdate;
    string title = search.selectTitle();

    if(search.valideSearch(title)){
        TCC tcc = search.searchTCC(title);
        int position = search.searchTCCPosition(tcc.getDetails().getTitle());
        tcc.setEvaluator(evaluatorUpdate.evaluatorRegister());

        ListTCC.erase(ListTCC.begin()+position);
        ListTCC.insert(ListTCC.begin() + position, tcc);
    } else{
        cout << "TCC inexistente!" << endl;
    }
}
void Update::editDetails(){
    Search search;
    Register detailsUpdate;
    string title = search.selectTitle();

    if(search.valideSearch(title)){
        TCC tcc = search.searchTCC(title);
        int position = search.searchTCCPosition(tcc.getDetails().getTitle());
        tcc.setDetails(detailsUpdate.detailsRegister());

        ListTCC.erase(ListTCC.begin()+position);
        ListTCC.insert(ListTCC.begin() + position, tcc);
    } else{
        cout << "TCC inexistente!" << endl;
    }
}
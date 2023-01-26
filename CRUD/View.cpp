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

void View::printStudent(TCC banca){
    cout << " - Aluno -" << endl;
    cout << " | Nome: " << banca.getStudent().getName();
    cout << " | Matricula: " << banca.getStudent().getMatricula();
    cout << " | Curso: " << banca.getStudent().getCourse();
    cout << " | E-mail: " << banca.getStudent().getEmail() << " |\n" << endl;
}

void View::printAdvisor(TCC banca){
    cout << " - Orientador - " << endl;
    cout << " | Nome: " << banca.getAdvisor().getName() << " |\n" << endl;
}

void View::printFrequency(TCC banca){
    cout << " - Frequencia - " << endl;
    cout << " | Porcentagem: " << banca.getFrequency().getPercentage() << " |\n" << endl;
}

void View::printEvaluator(TCC banca){
    cout << " - Avaliador - " << endl;
    cout << " | Nome: " << banca.getEvaluator().getName();
    cout << " | Instituicao: " << banca.getEvaluator().getInstitutes();
    cout << " | E-mail: " << banca.getEvaluator().getEmail() << " |\n" << endl;
}

void View::printDetails(TCC banca){
    cout << " - Detalhes da Banca - " << endl;
    cout << " | Title: " << banca.getDetails().getTitle();
    cout << " | Resumo: " << banca.getDetails().getAbstract();
    cout << " | Horario: " << banca.getDetails().getTime();
    cout << " | Local: " << banca.getDetails().getLocal() << " |\n" << endl;
}

void View::printTCC(TCC banca){
    cout << "------------------------------------------------" << endl;
    printStudent(banca);
    printAdvisor(banca);
    printFrequency(banca);
    printEvaluator(banca);
    printDetails(banca);
}

void View::viewTCC(){
    Search search;
    TCC tcc;
    string title = search.selectTitle();

    if(search.valideSearch(title)){
        tcc = search.searchTCC(title);
        printTCC(tcc);
    } else{
        cout << "TCC inexistente!" << endl;
    }
}

void View::viewAllTCC(){
    cout<<" Trabalhos registrados:\n"<<endl;
    for (int i = 0; i<ListTCC.size(); i++) {
        printTCC(ListTCC [i]);
    }
}

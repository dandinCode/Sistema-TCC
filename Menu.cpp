//
// Created by Caio on 23/11/2022.
//

#include "Menu.h"

Menu::Menu() {
    cout << " ======== MENU ======== \n" << endl;
    cout << "Registrar nova banca   [1]" << endl;
    cout << "Exibir banca           [2]" << endl;
    cout << "Atualizar banca        [3]" << endl;
    cout << "Deletar banca          [4]" << endl;
}

void Menu::chooseOption() {
    cout << "Digite a opcao desejada: " << endl;
    cin >> option;
    valideOption(option);
}

void Menu::valideOption(int option) {
    TCC newTCC;
    if(option == 1){
        tccRegister();
    } else if(option == 2){
        if (newTCC.listSize() != 0) {
            tccView();
        } else {
            cout << "Nenhum TCC cadastrado ainda!" << endl;
        }
    } else if(option == 3){
        if (newTCC.listSize() != 0) {
            tccUpdate();
        } else {
            cout << "Nenhum TCC cadastrado ainda!" << endl;
        }
    } else if(option == 4){
        if (newTCC.listSize() != 0) {
            tccDelete();
        } else {
            cout << "Nenhum TCC cadastrado ainda!" << endl;
        }
    } else {
        cout << "Opcao inexistente!" << endl;
    }
}

void Menu::tccRegister(){
    Register newRegister;
    newRegister.tccRegister();
}
void Menu::tccView(){
    View newView;
    newView.chooseOption();
}
void Menu::tccUpdate() {
    Update newUpdate;
    newUpdate.chooseOption();
}
void Menu::tccDelete(){
    Delete newDelete;
    newDelete.selectTCC();
}
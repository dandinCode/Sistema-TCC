//
// Created by Caio on 20/11/2022.
//

#include "Delete.h"

Delete::Delete() {
    cout << "Digite o nome do TCC que deseja excluir: " << endl;
}

void Delete::selectTCC() {
    cin >> title;
    deleteTCC(title);
}

void Delete::deleteTCC(string title) {
    for(int i = 0; i < ListTCC.size(); i++) {
        if(ListTCC[i].getDetails().getTitle() == title){
            ListTCC.erase(ListTCC.begin()+i);
            cout << "TCC deletado!" << endl;
        }
    }
}
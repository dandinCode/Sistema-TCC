//
// Created by Caio on 23/11/2022.
//

#include "Search.h"

TCC Search::searchTCC() {
    cout << "Digite o titulo do trabalho que desejado: " << endl;
    cin >> title;
    for(int i = 0; i < ListTCC.size(); i++) {
        if(ListTCC[i].getDetails().getTitle() == title){
            return ListTCC[i];
        }
    }
    cout << "TCC inexistente!" << endl;
    Menu menu;
    menu.chooseOption();
}

int Search::searchTCCPosition(string title){
    for(int i = 0; i < ListTCC.size(); i++) {
        if(ListTCC[i].getDetails().getTitle() == title){
            return i;
        }
    }
    return -1;
}

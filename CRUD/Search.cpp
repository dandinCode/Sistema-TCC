//
// Created by Caio on 23/11/2022.
//

#include "Search.h"

TCC Search::searchTCC(string title) {
    TCC tcc;
    for(int i = 0; i < ListTCC.size(); i++) {
        if(ListTCC[i].getDetails().getTitle() == title){
            tcc = ListTCC[i];
        }
    }
    return tcc;
}

bool Search::valideSearch(string title){
    for(int i = 0; i < ListTCC.size(); i++) {
        if(ListTCC[i].getDetails().getTitle() == title){
            return true;
        }
    }
    return false;
}

string Search::selectTitle(){
    cout << "Digite o titulo do trabalho que desejado: " << endl;
    cin >> title;
    return title;
}


int Search::searchTCCPosition(string title){
    for(int i = 0; i < ListTCC.size(); i++) {
        if(ListTCC[i].getDetails().getTitle() == title){
            return i;
        }
    }
    return -1;
}

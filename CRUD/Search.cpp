//
// Created by Caio on 23/11/2022.
//

#include "Search.h"

json Search::searchTCC(string title) {
    json jsonData = getJsonArray();
    json tccJsonObj;
    for (int i = 0; i<jsonData.size(); i++){
        if (jsonData[i]["Dados da banca"]["Titulo do TCC"] == title){
            tccJsonObj =  jsonData[i];
        }
    }
    return tccJsonObj;
}

bool Search::valideSearch(string title){
    json jsonData = getJsonArray();
    for(int i = 0; i < jsonData.size(); i++) {
        if(jsonData[i]["Dados da banca"]["Titulo do TCC"] == title){
            return true;
        }
    }
    return false;
}

string Search::selectTitle(){
    cout << "Digite o titulo do trabalho: " << endl;
    cin >> title;
    return title;
}

json Search::getJsonArray() {
    ManipulateJson manipulateJson;
    return manipulateJson.getJsonArray();
}
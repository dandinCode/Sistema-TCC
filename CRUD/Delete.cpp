//
// Created by Caio on 20/11/2022.
//

#include "Delete.h"

void Delete::selectTCC() {
    Search search;
    title = search.selectTitle();
    json jsonData = getJsonArray();

    if(search.valideSearch(title)){
        deleteTCC(jsonData);
    }   else{
        cout << "TCC inexistente!" << endl;
    }

    ofstream outFile("../JSON/tccDATA.json");
    outFile << setw(4) << jsonData << endl;
    outFile.close();
}

void Delete::deleteTCC(json& jsonData){
    for(int i = 0; i < jsonData.size(); i++) {
        if(jsonData[i]["Dados da banca"]["Titulo do TCC"] == title){
            if (jsonData[i].is_object()) {
                jsonData[i] = json::array({ jsonData[i] });
            }
            jsonData.erase(jsonData.begin() + i);
            cout << "TCC deletado!" << endl;
        }
    }
}

json Delete::getJsonArray() {
    ManipulateJson manipulateJson;
    return manipulateJson.getJsonArray();
}
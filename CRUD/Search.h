//
// Created by Caio on 23/11/2022.
//

#ifndef SISTEMADETCC_SEARCH_H
#define SISTEMADETCC_SEARCH_H

#include "../Data/TCC.h"
#include "Menu.h"

class Search : public TCC {
private:
    string title;
public:
    json searchTCC(string title);
    bool valideSearch(string title);
    string selectTitle();
    int searchTCCPosition(string title);
    json getJsonArray();


};


#endif //SISTEMADETCC_SEARCH_H

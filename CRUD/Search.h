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
    TCC searchTCC();
    int searchTCCPosition(string title);


};


#endif //SISTEMADETCC_SEARCH_H

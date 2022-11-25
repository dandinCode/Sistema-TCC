//
// Created by Caio on 23/11/2022.
//

#ifndef SISTEMADETCC_MENU_H
#define SISTEMADETCC_MENU_H

#include "CRUD/Register.h"
#include "CRUD/View.h"
#include "CRUD/Update.h"
#include "CRUD/Delete.h"

class Menu{
private:
    int option;
public:
    Menu();
    void chooseOption();
    void valideOption(int option);
    void tccRegister();
    void tccView();
    void tccUpdate();
    void tccDelete();
};


#endif //SISTEMADETCC_MENU_H

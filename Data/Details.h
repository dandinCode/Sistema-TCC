//
// Created by Caio on 18/11/2022.
//

#ifndef SISTEMADETCC_DETAILS_H
#define SISTEMADETCC_DETAILS_H

#include <string>
#include <iostream>

using namespace std;

class Details {
private:
    string title;
    string abstract;
    string time;
    string local;
public:
    Details();
    Details(string title, string abstract, string time, string local);
    string getTitle();
    void setTitle(string title);
    string getAbstract();
    void setAbstract(string abstract);
    string getTime();
    void setTime(string time);
    string getLocal();
    void setLocal(string local);
};


#endif //SISTEMADETCC_DETAILS_H

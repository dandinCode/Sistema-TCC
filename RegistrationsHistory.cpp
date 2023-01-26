//
// Created by Caio on 26/12/2022.
//

#include "RegistrationsHistory.h"

void RegistrationsHistory::addInHistory(TCC tcc){
    FILE *file;

    file = fopen("RegistrationsHistory.txt", "wt");
    ofstream fout("RegistrationsHistory.txt");
    fout << "=====================================" << endl;
    fout << "Banca numero: " << TccNumber << endl;
    addStudent(tcc);
    addAdvisor(tcc);
    addFrequency(tcc);
    addEvaluator(tcc);
    addDetails(tcc);

    fclose(file);
    TccNumber += 1;
}

void RegistrationsHistory::addStudent(TCC tcc){
    ofstream fout("RegistrationsHistory.txt");
    fout << "-- Dados do estudante --" << endl;
    fout << " | Nome: " << tcc.getStudent().getName();
    fout << " | Matricula: " << tcc.getStudent().getMatricula();
    fout << " | Curso: " << tcc.getStudent().getCourse();
    fout << " | E-mail: " << tcc.getStudent().getEmail() << " |\n" << endl;
}

void RegistrationsHistory::addAdvisor(TCC tcc){
    ofstream fout("RegistrationsHistory.txt");
    fout << " - Orientador - " << endl;
    fout << " | Nome: " << tcc.getAdvisor().getName() << " |\n" << endl;
}

void RegistrationsHistory::addFrequency(TCC tcc){
    ofstream fout("RegistrationsHistory.txt");
    fout << " - Frequencia - " << endl;
    fout << " | Porcentagem: " << tcc.getFrequency().getPercentage() << " |\n" << endl;
}

void RegistrationsHistory::addEvaluator(TCC tcc){
    ofstream fout("RegistrationsHistory.txt");
    fout << " - Avaliador - " << endl;
    fout << " | Nome: " << tcc.getEvaluator().getName();
    fout << " | Instituicao: " << tcc.getEvaluator().getInstitutes();
    fout << " | E-mail: " << tcc.getEvaluator().getEmail() << " |\n" << endl;
}

void RegistrationsHistory::addDetails(TCC tcc){
    ofstream fout("RegistrationsHistory.txt");
    fout << " - Detalhes da Banca - " << endl;
    fout << " | Title: " << tcc.getDetails().getTitle();
    fout << " | Resumo: " << tcc.getDetails().getAbstract();
    fout << " | Horario: " << tcc.getDetails().getTime();
    fout << " | Local: " << tcc.getDetails().getLocal() << " |\n" << endl;
}

void RegistrationsHistory::viewTotalRecords() {
    ofstream fout("RegistrationsHistory.txt");
    fout << "Total de TCC's registrados: " << TccNumber << endl;
}
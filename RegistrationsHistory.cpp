//
// Created by Caio on 26/12/2022.
//

#include "RegistrationsHistory.h"

void RegistrationsHistory::addInHistory(TCC tcc){
    ofstream RegistrationsHistory;
    RegistrationsHistory.open("../RegistrationsHistory.txt", ios_base::app);

    if (RegistrationsHistory.is_open()) {
        RegistrationsHistory << "\n=====================================\n" << endl;
        addStudent(tcc, RegistrationsHistory);
        addAdvisor(tcc, RegistrationsHistory);
        addFrequency(tcc, RegistrationsHistory);
        addEvaluator(tcc, RegistrationsHistory);
        addDetails(tcc, RegistrationsHistory);
        RegistrationsHistory.close();
    } else {
        cout << "Erro ao registrar banca." << endl;
    }
}

void RegistrationsHistory::addStudent(TCC tcc, ofstream& RegistrationsHistory){
    RegistrationsHistory << "-- Dados do estudante --" << endl;
    RegistrationsHistory << " | Nome: " << tcc.getStudent().getName();
    RegistrationsHistory << " | Matricula: " << tcc.getStudent().getEnrollment();
    RegistrationsHistory << " | Curso: " << tcc.getStudent().getCourse();
    RegistrationsHistory << " | E-mail: " << tcc.getStudent().getEmail() << " |\n" << endl;
}

void RegistrationsHistory::addAdvisor(TCC tcc, ofstream& RegistrationsHistory){
    RegistrationsHistory << " - Orientador - " << endl;
    RegistrationsHistory << " | Nome: " << tcc.getAdvisor().getName() << " |\n" << endl;
}

void RegistrationsHistory::addFrequency(TCC tcc, ofstream& RegistrationsHistory){
    RegistrationsHistory << " - Frequencia - " << endl;
    RegistrationsHistory << " | Porcentagem: " << tcc.getFrequency().getPercentage() << " |\n" << endl;
}

void RegistrationsHistory::addEvaluator(TCC tcc, ofstream& RegistrationsHistory){
    RegistrationsHistory << " - Avaliador - " << endl;
    RegistrationsHistory << " | Nome: " << tcc.getEvaluator().getName();
    RegistrationsHistory << " | Instituicao: " << tcc.getEvaluator().getInstitutes();
    RegistrationsHistory << " | E-mail: " << tcc.getEvaluator().getEmail() << " |\n" << endl;
}

void RegistrationsHistory::addDetails(TCC tcc, ofstream& RegistrationsHistory){
    RegistrationsHistory << " - Detalhes da Banca - " << endl;
    RegistrationsHistory << " | Title: " << tcc.getDetails().getTitle();
    RegistrationsHistory << " | Resumo: " << tcc.getDetails().getAbstract();
    RegistrationsHistory << " | Horario: " << tcc.getDetails().getTime();
    RegistrationsHistory << " | Local: " << tcc.getDetails().getLocal() << " |\n" << endl;
}
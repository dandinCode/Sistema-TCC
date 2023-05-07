//
// Created by Caio on 18/11/2022.
//

#include "Register.h"

Student Register::studentRegister(){
    string nameStudent, matricula, course, emailStudent;
    cout << "Digite seu nome: " << endl;
    cin >> nameStudent;
    cout << "Digite sua Matricula: " << endl;
    cin >> matricula;
    cout << "Digite se curso: " << endl;
    cin >> course;
    cout << "Digite seu email: " << endl;
    cin >> emailStudent;

    Student newStudent(nameStudent, matricula, course, emailStudent);
    return newStudent;
}
Advisor Register::advisorRegister(){
    string nameAdvisor;

    cout << "Digite o nome do orientador: " << endl;
    cin >> nameAdvisor;

    Advisor newAdvisor(nameAdvisor);
    return newAdvisor;
}
Frequency Register::frequencyRegister(){
    double percentage;

    cout << "Digite a frequencia: " << endl;
    cin >> percentage;

    Frequency newFrequency(percentage);
    return  newFrequency;
}
Evaluator Register::evaluatorRegister(){
    string nameJury, institutes, emailJury;

    cout << "Digite o nome do avaliador: " << endl;
    cin >> nameJury;
    cout << "Digite o nome da instituicao: " << endl;
    cin >> institutes;
    cout << "Digite o e-mail do avaliador: " << endl;
    cin >> emailJury;

    Evaluator newEvaluator(nameJury, institutes, emailJury);
    return newEvaluator;
}
Details Register::detailsRegister(){
    string title, abstract, time, local;

    cout << "Digite o titulo do trabalho: " << endl;
    cin >> title;
    cout << "Digite o resumo: " << endl;
    cin >> abstract;
    cout << "Digite o horario: " << endl;
    cin >> time;
    cout << "Digite o local de apresentacao: " << endl;
    cin >> local;

    Details newDetails(title, abstract, time, local);
    return newDetails;
}

void Register::tccRegister() {
    Student newStudent = studentRegister();
    Advisor newAdvisor = advisorRegister();
    Frequency newFrequency = frequencyRegister();
    Evaluator newEvaluator = evaluatorRegister();
    Details newDetails = detailsRegister();

    TCC newTCC(newStudent, newAdvisor, newFrequency, newEvaluator, newDetails);
    ListTCC.push_back(newTCC);

    RegistrationsHistory registrationsHistory;
    registrationsHistory.addInHistory(newTCC);

}

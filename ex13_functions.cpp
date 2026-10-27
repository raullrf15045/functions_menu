#include <iostream>
#include <string>
#include <time.h>

using namespace std;

time_t now = time(NULL);
struct tm *t = localtime(&now);

void menu() {
    cout << "============================" << endl;
    cout << "Escolha uma opcao: \n";
    cout << "1 - Em que ano tamos\n";
    cout << "2 - Sair" << endl;
    cout << "============================" << endl;
}

int getYear () { return (t->tm_year + 1900); }
int getMoth () { return (t->tm_mon + 1); }
int getDay () { return t->tm_mday; }

int aMinhaIdade(int ano, int mes, int dia) {
    int aux = getYear() - ano;

    if (getMoth() < mes) {
        aux --;
    } else {
        if (getDay() < dia && getMoth() == mes) {
            aux --;
        }
    }
    return aux;
}

int main() {
    int opcao, ano;

    cout << "a minha idade = " << aMinhaIdade(2010, 7, 28) << "anos\n";

        while (opcao != 2){
            menu();
        cout << "Faz uma escolha: ";
        cin >> opcao;

        if (opcao == 1){
            ano = getYear();
            cout << ano;
            cout << "\n";
        } else if (opcao == 2) {
        } else {
            cout << "Essa opcao nao existe." << endl;
        }

    }

    return 0;
}

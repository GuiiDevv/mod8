// aula 6;
// professora: erika dilly;
#include <iostream>
using namespace std;

class ContaBancaria{
private:
    string titular;
    float saldo;
public:
    ContaBancaria(string titular, float saldo){
        this->titular = titular;
        this->saldo = saldo;
    }
    
    void depositar(){
        float valor;
        cout << "digite o valor de deposito: ";
        cin >> valor;
        saldo += valor;
        cout << "seu deposito foi de: " << saldo << endl;
        cout << "seu saldo atual é: " << saldo << endl;
    }

    void sacar(){
        float valor;
        cout << "digite o valor de saque: ";
        cin >> valor;
        saldo -= valor;
        cout << "seu saque foi de: " << saldo << endl;
        cout << "seu saldo atual é: " << saldo << endl;
    }
};

int main(){
    ContaBancaria cb1("Guilherme", 10);

    cb1.depositar();
    cb1.sacar();

    return 0;
}
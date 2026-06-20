// aula 9;
// professora: erika dilly;
#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    string titular;
    double saldo;
public:
    ContaBancaria(string t, double s) : titular(t), saldo(s) {}

    string getTitular() const { return titular; }
    double getSaldo() const { return saldo; }

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "seu deposito foi de: R$" << valor << endl;
        } else {
            cout << "valor invalido para deposito!" << endl;
        }
    }

    bool sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "saque de R$" << valor << " realizado." << endl;
            return true;
        } else {
            cout << "saldo insuficiente ou valor invalido!" << endl;
            return false;
        }
    }
};

int main() {
    ContaBancaria conta("Guilherme", 1000.0);

    cout << "Titular: " << conta.getTitular() << endl;
    cout << "saldo: R$" << conta.getSaldo() << endl;

    conta.depositar(500.0);
    conta.sacar(200.0);
    conta.sacar(2000.0);

    cout << "saldo final é: R$" << conta.getSaldo() << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    const string loginCorreto = "admin";
    const string senhaCorreta = "1234";
    const int maxTentativas = 3;
    int tentativas = 0;
    bool logado = false;

    while (tentativas < maxTentativas && !logado) {
        string login, senha; 

        cout << "Digite seu login: ";
        cin >> login;
        cout << "Digite sua senha: ";
        cin >> senha;

        if (login == loginCorreto && senha == senhaCorreta) {
            logado = true;
            cout << "Usuario logado com sucesso!";

        } else {
            tentativas++;
            if (tentativas == maxTentativas) {
                cout << "usuario bloqueado." << endl;
                break;
            } else {
                cout << "usuario invalido, tente novamente.\n";
            }
        }
    }
}
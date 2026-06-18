// aula 6;
// professora: erika dilly;
#include <iostream>
#include <string>
using namespace std;

class Funcionario{
protected:
    string nome;
    int salario;

public:
    Funcionario(string n, int s) : salario(s), nome(n) {}

    virtual void exibir_salario() {
        cout << "seu salario é: " << salario << endl;
    }
};

class Gerente : public Funcionario {
private:
    int bonus;
public: 
    Gerente(string n, int salario, int bonus) : Funcionario(n, salario), bonus(bonus) {}

    void exibir_salario() override {
        bonus = salario * 0.20;
        cout << "o salario do gerente com bonus é: R$ " << salario+bonus << "." << endl;
    }
};

int main() {
    Funcionario f("Guilherme", 1500);
    Gerente g("Gabriel", 1500, 0);


    f.exibir_salario();
    g.exibir_salario();

    return 0;
}
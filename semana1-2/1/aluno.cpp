// professora: erika dilly;
#include <iostream>
#include <string>
using namespace std;


class Aluno{
private:
    std::string nome;
    int nota1;
    int nota2;
    float media;


public:
    Aluno(std::string nome, int nota1, int nota2){
        this->nome = nome;
        this->nota1 = nota1;
        this->nota2 = nota2;
    }

    void mostrarNotas(){
        cout << this->nome << endl;
        cout << "sua primeira nota: " << nota1 << endl;
        cout << "sua segunda nota: " << nota2 << endl;
    }

    void calcularNotas(){
        media = nota1 + nota2;
        media = media / 2;
        cout << "sua media e: " << media << endl;

        if (media >= 7) {
            cout << "aluno aprovado";
        } else {
            cout << "aluno reprovado";
        }

    }
};

int main(){
    Aluno aln1("Guilherme", 6, 7);

    aln1.mostrarNotas();

    aln1.calcularNotas();

    
    return 0;
}
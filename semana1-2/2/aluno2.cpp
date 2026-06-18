// aula 6;
// professora: erika dilly;
#include <iostream>
#include <string>
using namespace std;


class Aluno{
private:
    std::string nome;
    double nota;


public:
    Aluno(std::string nome, double nota) {
        this->nome = nome;
        this->nota = nota;
        if (nota >= 0 && nota <= 10 ) {
            this->nota = nota;
        } else {
            this->nota = 0;
            cout << "voce esta reprovado";
        }
    }

    string get_nome() {
        return nome;
    }

    double get_nota() {
        return nota;
    }

    void set_nota(double nova_nota){ // o set serve pra alterar e adicionar nova nota;
        if (nova_nota >= 0 && nova_nota <= 10) {
            nota = nova_nota;
            cout << "nova nota atualizada para: " << nova_nota << endl;
        } else {
            cout << "entrada para nota invalida! tente novamente com valor entre 0 a 10." << endl;
        }
    }

    void exibir_info() {
        cout << "O aluno chamado: " << nome << " teve uma nota com valor de: " << nota <<  endl;
        if (nota >= 7) {
            cout << "voce foi aprovado!" << endl;
        } else {
            cout << "voce foi reprovado!" << endl;
        }
    }

};

int main(){

    Aluno aln ("Guilherme", 7);

    aln.exibir_info();

    aln.set_nota(10);
    aln.exibir_info();

    aln.set_nota(8);
    aln.exibir_info();

    return 0;
}


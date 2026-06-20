;/ professora: erika dilly;
#include <iostream>
#include <string>
using namespace std;


class Pessoa{
private:
    string nome;
    int idade;

public:
    Pessoa(std::string nome, int idade){
        this->nome = nome;
        this->idade = idade;
    }

    void mostrarInformacoes(){
        cout << "seu nome e: " << nome << endl;
        cout << "sua idade e: " << idade << endl;
    }
};

int main(){
    Pessoa p1("Guilherme", 24);
    Pessoa p2("Gabriel", 29);

    p1.mostrarInformacoes();
    p2.mostrarInformacoes();
    
    return 0;
}
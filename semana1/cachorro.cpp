// aula 6;
// professora: erika dilly;
#include <iostream>
#include <string>
using namespace std;


class Cachorro{
private:
    std::string nome;
    std::string raca;

public:
    Cachorro(std::string nome, std::string raca){
        this->nome = nome;
        this->raca = raca;
    }

    void latir(){
        cout << nome << ": auau" << endl;
        cout << "sua raca e: " << raca << endl;
    }
};

int main(){
    Cachorro pipoca("Pipoca", "poodle");

    pipoca.latir();

    
    return 0;
}
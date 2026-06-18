// aula 6;
// professora: erika dilly;
#include <iostream>
#include <string>
using namespace std;

class Veiculo{
protected:
    string marca;

public:
    Veiculo(string m) : marca(m) {}

    virtual void exibir() {
        cout << "marca do carro: " << marca << endl;
    }
};

class Carro : public Veiculo {
private: 
    string modelo;
public: 
    Carro(string m, string mo) : Veiculo(m), modelo(mo) {}

    void exibir() override {
        cout << "marca do veiculo: " << marca << "." << "\nmodelo do veiculo: " << modelo << "." << endl; 
    }
};

int main() {
    Carro c("toyota", "sedan");
    c.exibir();

    return 0;
}
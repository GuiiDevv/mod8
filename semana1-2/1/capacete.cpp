// aula 6;
// professora: erika dilly;
#include <iostream>
using namespace std;

class Capacete {
public:
    string cor;
    string modelo;

    void caracteristicas() { // METODO QUE CHAMA OS ATRIBUTOS;
        cout << "cor do capacete: " << cor << endl; // MEU ATRIBUTO 1;
        cout << "modelo do capacete: " << modelo << endl; // MEUS ATRIBUTO 2;
    }
};

int main(){
    Capacete c1; // CHAMEI MINHA CLASS E DEI NOME C1 AO OBJETO;
    c1.cor = "branco e vermelho"; //EU ATRIBUI ELEMENTOS AO OBJETO;
    c1.modelo = "AXXIS";  //EU ATRIBUI ELEMENTOS AO OBJETO;

    c1.caracteristicas(); // MEU OBJETO CHAMADO C1 COM MEU METODO QUE PUXA OS ATRIBUTOS COM ELEMENTOS;
    
    return 0;
}
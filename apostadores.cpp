#include <iostream>
#include <vector>
using namespace std;

int resultadosCasa[] = {3, 1, 1, 4}; //aqui usei vetor estatico
int resultadosFora[] = {0, 1, 2, 2};

string confrontos[] = {"brasilXegito", "russiaXmarrocos", "francaXargentina", "germainiaXcostademarfim"}; //aqui tambem

vector<string> apostadores;

class Apostador {
private:
    string nome;
    int pontos;
    int palpiteCasa;
    int palpiteFora;
public:
    Apostador(string n, int casa, int fora) : nome(n), palpiteCasa(casa), palpiteFora(fora), pontos(0) {}

    void criar_apostador(vector<string>& apostadores) {  //duvida, crio um metodo, com paramento recebendo uma ref que seria meu vetor dinamico;
        for (int i = 0; i <= 3; i++) {
            cout << "digite o nome do apostador " << i << ": ";
            cin >> nome;

            apostadores.push_back(nome); //adiciona um nome para meu vetor apostadores;
        }
    }
    
    void exibir_info() const {
        cout << "\n== apostadores cadastrados ==\n";
        for (int i = 0; i < apostadores.size(); i++) { // aqui crio o for com condicoes e o "apostadores.size" retorna a quantida de elements/string;
            cout << (i + 1) << " - " << apostadores[i] << endl; //aqui com meu i, pego cada nome que tem dentro do apostadores;
        }
    }
};

int main(){
    Apostador apost ("gui", 0, 0);

    apost.criar_apostador(apostadores);

    apost.exibir_info();

    return 0;
}
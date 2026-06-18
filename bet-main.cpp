#include <iostream>
#include <vector>
#include <string>
using namespace std;

int resultadosCasa[] = {3, 1, 1, 4}; //aqui usei vetor estatico
int resultadosFora[] = {0, 1, 2, 2};

string confrontos[] = {"brasilXegito", "russiaXmarrocos", "francaXargentina", "germainiaXcostademarfim"}; //aqui tambem

vector<string> apostadores;

class Apostador {
protected:
    string nome;
    int pontos;

public:
    Apostador(string n) : nome(n), pontos(0) {}

    void criar_apostador(vector<string>& apostadores) {  //duvida, crio um metodo, com paramento recebendo uma ref que seria meu vetor dinamico;
        for (int i = 1; i <= 3; i++) {
            cout << "digite o nome do apostador " << i << ": ";
            cin >> nome;
            apostadores.push_back(nome); //adiciona um nome para meu vetor apostadores;
        }
    }
    
    void exibir_info() const {
        cout << "===== apostadores cadastrados =====\n";
        for (size_t i = 0; i < apostadores.size(); i++) { // aqui crio o for com condicoes e o "apostadores.size" retorna a quantida de elements/string;
            cout << (i + 1) << " - " << apostadores[i] << endl; //aqui com meu i, pego cada nome que tem dentro do apostadores;
        }
    }
};

class Palpite : public Apostador {
private:
    int palpiteCasa;
    int palpiteFora;
    vector<int> pontosPorApostador;
public:
    Palpite(string n, int palc, int palf) : Apostador(n), palpiteCasa(palc), palpiteFora(palf) {}

    void criar_palpite() {
        pontosPorApostador.resize(apostadores.size()); //tive que pegar com ia uma forma de adicionar pontos para cada apostador, criei um vetor dinamico como variavel e adicionei com size para apostadores;
        for (size_t i = 0; i < apostadores.size(); i++) {
            cout << "===================================" << endl;
            cout << "palpites para o jogador " << apostadores[i] << " : " << endl;
            for (size_t j = 0; j < 4; j++) {
                cout << "primeiro palpite para " << confrontos[j] << ": " << endl;
            
                cout << "gols do time da casa: ";
                cin >> palpiteCasa;

                cout << "gols do time visitante: ";
                cin >> palpiteFora;

                cout << "seu palpite foi: " << palpiteCasa << " X " << palpiteFora << endl;

                if (palpiteCasa == resultadosCasa[j] && palpiteFora == resultadosFora[j]) {
                    pontosPorApostador[i] += 10;
                }
            }
        }
    }
    void exibir_info() {
        cout << "===================================" << endl;
        for (size_t i = 0; i < apostadores.size(); i++) {
            cout << "total de pontos do Apostador " << apostadores[i] << " : " << pontosPorApostador[i] << endl;
        }
    } 
};

int main(){
    Apostador apost("gui");
    Palpite p("gui", 0, 0);

    apost.criar_apostador(apostadores);
    apost.exibir_info();
    p.criar_palpite();
    p.exibir_info();

    return 0;
}




// } else if (palpiteCasa >! resultadosFora[j] && palpiteFora >! resultadosCasa[j]) {
    //pontosPorApostador[i] += 5;
    //}
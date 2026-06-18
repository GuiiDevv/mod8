#include <iostream>

using namespace std;

const float brasilXegito = 3.0;
const float russiaXmarrocos = 1.1;
const float francaXargentina = 1.2;
const float germainiaXcostademarfim = 4.2;


int main() {
    bool sessao = true;

    int ptuser1 = 0; // ptuser2, ptuser3;
    float aposta1; // aposta2, aposta3;

    while (sessao) {

        cout << "=== BEM-VINDO AO SISTEMA DE APOSTAS ===" << endl;
        cout << "As apostas sao em numeros reais. Ex: 1.0 = 1 x 0, 1.1 = 1 x 1\n" << endl;
        
        // --- LEITURA DAS APOSTAS ---
        cout << "Apostador 1 - Digite seu palpite para Brasil x Egito: ";
        cin >> aposta1;

        int golsCasa = (int)brasilXegito;             // 3
        int golsVisitante = (int)(brasilXegito * 10) % 10; // 0

        int c1 = (int)aposta1;             // Gols do Brasil na aposta 1
        int v1 = (int)(aposta1 * 10) % 10; // Gols do Egito na aposta 1

        if (aposta1 == brasilXegito){
            ptuser1 = ptuser1 + 10;
        } else if ((golsCasa > golsVisitante) && (c1 > v1)){
            ptuser1 = ptuser1 + 5;
        } else {
            ptuser1 = ptuser1 + 0;
        }

        cout << ptuser1 << endl;
        sessao = false;
    }
    return 0;
}
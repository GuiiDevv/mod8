#include <iostream>

using namespace std;

const float brasilXegito = 3.0;
const float russiaXmarrocos = 1.1;
const float francaXargentina = 1.2;
const float germainiaXcostademarfim = 4.2;

int tipoResultado(float valor) {
    int parteInteira = (int)valor;
    int parteDecimal = (int)((valor - parteInteira) * 10 + 0.5);

    if (parteInteira > parteDecimal) {
        return 1; // casa ganhou
    } else if (parteInteira == parteDecimal) {
        return 0; // empate
    } else {
        return 2; // visitante ganhou
    }
}

int calcularPontos(float aposta, float resultadoReal) {
    if (aposta == resultadoReal) {
        return 4;
    }

    int tipoAposta = tipoResultado(aposta);
    int tipoReal = tipoResultado(resultadoReal);

    if (tipoAposta == tipoReal) {
        if (tipoReal == 0) {
            return 2;
        } else {
            return 3;
        }
    }

    return 0;
}

int main() {
    bool sessao = true;

    float aposta1, aposta2, aposta3;
    int ptuser1 = 0;
    int ptuser2 = 0;
    int ptuser3 = 0;

    while (sessao) {
        cout << "=== BEM-VINDO AO SISTEMA DE APOSTAS ===" << endl;
        cout << "As apostas sao em numeros reais. Ex: 3.0 = placar exato, 1.1 = empate, 4.2 = outro resultado\n" << endl;

        cout << "Apostador 1 - Digite seu palpite para Brasil x Egito: ";
        cin >> aposta1;
        ptuser1 = calcularPontos(aposta1, brasilXegito);

        cout << "Apostador 2 - Digite seu palpite para Brasil x Egito: ";
        cin >> aposta2;
        ptuser2 = calcularPontos(aposta2, brasilXegito);

        cout << "Apostador 3 - Digite seu palpite para Brasil x Egito: ";
        cin >> aposta3;
        ptuser3 = calcularPontos(aposta3, brasilXegito);

        cout << "\n=== COMPUTANDO RESULTADOS (Brasil 3 x 0 Egito) ===\n" << endl;
        cout << "Apostador 1: " << ptuser1 << " pontos" << endl;
        cout << "Apostador 2: " << ptuser2 << " pontos" << endl;
        cout << "Apostador 3: " << ptuser3 << " pontos" << endl;

        sessao = false;
    }

    return 0;
}
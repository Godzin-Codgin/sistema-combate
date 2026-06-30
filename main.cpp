#include <iostream>
#include "combate.h"

using namespace std;

int main() {
    // Nosso heroi
    string heroiNome = "Godzin prozin";
    int heroiVida = 120;
    int heroiAtaque = 30;

    // Dois inimigos
    string ini1Nome = "jooji matadorzin";
    int ini1Vida = 70;
    int ini1Ataque = 20;

    string ini2Nome = "vinin noobzin";
    int ini2Vida = 50;
    int ini2Ataque = 10;

    cout << "=== SIMULADOR DE COMBATE ===" << endl;
    mostrarStatus(heroiNome, heroiVida, heroiAtaque);
    mostrarStatus(ini1Nome, ini1Vida, ini1Ataque);
    mostrarStatus(ini2Nome, ini2Vida, ini2Ataque);

    system("pause");
    return 0;
}

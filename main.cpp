#include <iostream>
#include "combate.h"

using namespace std;

int main() {
    
    string heroiNome = "Godzin prozin";
    int heroiVida = 120;
    int heroiAtaque = 30;

   
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
    
   
cout << "\n--- O Combate Comeca! ---" << endl;


int danoNoIni1 = calcularDano(heroiAtaque, 10);
ini1Vida -= danoNoIni1;
cout << heroiNome << " atacou " << ini1Nome << " causando " << danoNoIni1 << " de dano!" << endl;
mostrarStatus(ini1Nome, ini1Vida, ini1Ataque);


int danoNoHeroi = calcularDano(ini2Ataque, 5);
heroiVida -= danoNoHeroi;
cout << ini2Nome << " contra-atacou " << heroiNome << " causando " << danoNoHeroi << " de dano!" << endl;
mostrarStatus(heroiNome, heroiVida, heroiAtaque);

    system("pause");
    return 0;
}

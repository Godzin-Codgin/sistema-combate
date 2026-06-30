#ifndef COMBATE_H
#define COMBATE_H
#include <iostream>
#include <string>

inline void mostrarStatus(std::string nome, int vida, int ataque) {
    std::cout << nome << " [Vida: " << vida << " | Ataque: " << ataque << "]" << std::endl;
}
#endif

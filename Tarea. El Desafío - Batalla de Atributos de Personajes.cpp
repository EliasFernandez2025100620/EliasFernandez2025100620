#include <iostream>
#include <string>

using namespace std;

struct Personaje {
    string nombre;
    int fuerza;
};

int main() {
    Personaje p1;
    Personaje p2;

    p1.nombre = "Goku";
    p1.fuerza = 99999; 

    p2.nombre = "Goku Black";
    p2.fuerza = 9999; 

    cout << "Personaje 1: " << p1.nombre << " con " << p1.fuerza << " puntos de ataque." << endl;
    cout << "Personaje 2: " << p2.nombre << " con " << p2.fuerza << " puntos de ataque." << endl;

    if (p1.fuerza > p2.fuerza) {
        cout << "\n¡" << p1.nombre << " es el mas fuerte!" << endl;
    } else if (p2.fuerza > p1.fuerza) {
        cout << "\n¡" << p2.nombre << " es el mas fuerte!" << endl;
    } else {
        cout << "\n¡Es un empate, ambos tienen la misma fuerza!" << endl;
    }

    return 0;
}

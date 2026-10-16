#include <iostream>
using namespace std;

int main() {
    cout << "Los primeros 5 numeros pares son:" << endl;
    
    // Se inicializa en 1 y se itera hasta 5, multiplicando por 2 para obtener el par
    for (int i = 1; i <= 5; i++) {
        cout << i * 2 << endl;
    }
    
    return 0;
}

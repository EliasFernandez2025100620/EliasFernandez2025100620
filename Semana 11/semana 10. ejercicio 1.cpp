#include <iostream>
using namespace std;

int main() {
    char letra;
    do {
        cout << "Ingrese un caracter: ";
        cin >> letra;
    } while (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u');

    cout << "Vocal minuscula ingresada correctamente: " << letra << endl;
    return 0;
}

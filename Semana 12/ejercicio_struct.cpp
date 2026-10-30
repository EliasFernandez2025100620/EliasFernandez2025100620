#include <iostream>
using namespace std; 

struct Persona {
    string nombre;
    int edad;
}

int main() {
    
    Persona p = {"Ana", 20};

  
    cout << p.nombre << " tiene " << p.edad << " años." << endl;

    return 0;
}


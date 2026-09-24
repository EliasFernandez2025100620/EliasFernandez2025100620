// Para incluir a la librería
#include <iostream>  

using namespace std; 

int main() { // Función principal
    
    int dia; // Declara una variable para guardar el número ingresado
    
    cout << "Ingrese un numero del 1 al 7: "; // Imprime un mensaje en la pantalla pidiendo el dato
    cin >> dia; // Lee lo que el usuario escribe en el teclado y lo guarda en la variable 'dia'

    // Para estructurar la  evalúacion del valor que tiene adentro la variable 'dia'
    switch (dia) {
        case 1: cout << "Domingo" << endl; break;     // Si el valor es 1, imprime "Lunes" y el 'break' corta la ejecución
        case 2: cout << "Lunes " << endl; break;    // Si el valor es 2, imprime "Martes" y sale del switch
        case 3: cout << "Martes" << endl; break; // Si el valor es 3, imprime "Miercoles" y sale del switch
        case 4: cout << "Miercoles" << endl; break;    // Si el valor es 4, imprime "Jueves" y sale del switch
        case 5: cout << "Jueves" << endl; break;   // Si el valor es 5, imprime "Viernes" y sale del switch
        case 6: cout << "Viernes" << endl; break;    // Si el valor es 6, imprime "Sabado" y sale del switch
        case 7: cout << "Sabado" << endl; break;   // Si el valor es 7, imprime "Domingo" y sale del switch
        default: cout << "Error: El numero no corresponde a un dia de la semana." << endl;//Se ejecuta si el usuario ingresó un número distinto
    }

    return 0; // Finaliza el programa indicando al sistema operativo que todo terminó con éxito
}

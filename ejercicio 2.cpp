// se agregan a la libreria a utilizar
#include <iostream> 

using namespace std;

// Funciones para cada operacion matematica
float sumar(float a, float b) { return a + b; }
float restar(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) { return a / b; }

int main() {// se inicia main
    float n1, n2; // se inicia los numeros 
    
    // Solicitar los dos numeros al usuario de una sola vez
    cout << "Ingrese dos numeros (mayores a 0 y menores a 100):\n";// se solicita la usuario ingresar numeros
    cin >> n1;// se lee y se guarda el primer numero en n1
    cin >> n2;// se lee y se guarda el segundo numero en n2
    // Controlar que los numeros esten dentro del rango permitido sin usar while
    if (n1 <= 0 || n1 >= 100 || n2 <= 0 || n2 >= 100) { //se valida los numeros ingresados que sean mayor a 0 y menor a 100
        cout << "Error: Los numeros ingresados no son validos." << endl;
        return 1; // Termina el programa inmediatamente por el error
    }
    
    // Mostrar el resultado de todas las operaciones directamente
    cout << "\nResultados:\n";// se imprime los resultados
    cout << "Suma: " << sumar(n1, n2) << endl;// se retorna las funciones de las sumas y las guarda
    cout << "Resta: " << restar(n1, n2) << endl;// se retorna las funciones de las restas y las guarda
    cout << "Multiplicacion: " << multiplicar(n1, n2) << endl;// se retorna las funciones de las multiplicaciones y las guarda
    cout << "Division: " << dividir(n1, n2) << endl;// se retorna las funciones de la divisiones y las guarda
    
    return 0;// Finaliza el programa indicando al sistema operativo que todo terminó con éxito
}

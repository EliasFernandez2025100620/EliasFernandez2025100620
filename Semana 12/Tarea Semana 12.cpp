#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

// 1. Definición de Estructura
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

// 2. Registro en Archivo (Escribir al final con ios::app)
void registrarPersonaje() {
    Personaje p;

    // Limpiar el búfer de entrada antes de leer strings
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n--- REGISTRAR NUEVO PERSONAJE ---\n";
    cout << "Nombre del personaje: ";
    getline(cin, p.nombre);
    
    cout << "Puntos de vida: ";
    while (!(cin >> p.vida)) {
        cout << "Entrada inválida. Ingrese un número entero para la vida: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Puntos de ataque: ";
    while (!(cin >> p.ataque)) {
        cout << "Entrada inválida. Ingrese un número entero para el ataque: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Apertura en modo adición (ios::app)
    ofstream archivo("personajes.txt", ios::app);

    // 5. Validación con is_open()
    if (archivo.is_open()) {
        archivo << p.nombre << "," << p.vida << "," << p.ataque << "\n";
        archivo.close(); // Cierre del archivo
        cout << "¡Personaje guardado exitosamente en 'personajes.txt'!\n";
    } else {
        cout << "Error: No se pudo abrir el archivo para escribir.\n";
    }
}

// 3. Consulta y Lectura (ifstream)
void verPersonajes() {
    ifstream archivo("personajes.txt");

    cout << "\n--- LISTA DE PERSONAJES REGISTRADOS ---\n";

    // 5. Validación con is_open()
    if (archivo.is_open()) {
        string linea;
        bool hayDatos = false;

        while (getline(archivo, linea)) {
            if (linea.empty()) continue;

            // Extraer atributos separados por coma
            size_t pos1 = linea.find(',');
            size_t pos2 = linea.rfind(',');

            if (pos1 != string::npos && pos2 != string::npos && pos1 != pos2) {
                string nombre = linea.substr(0, pos1);
                string vida = linea.substr(pos1 + 1, pos2 - pos1 - 1);
                string ataque = linea.substr(pos2 + 1);

                cout << "Nombre: " << nombre 
                     << " | Vida: " << vida 
                     << " | Ataque: " << ataque << "\n";
                hayDatos = true;
            }
        }

        if (!hayDatos) {
            cout << "El archivo está vacío. Registra un personaje primero.\n";
        }

        archivo.close(); // Cierre del archivo
    } else {
        cout << "No se encontró el archivo 'personajes.txt' o aún no se ha creado ningún registro.\n";
    }
}

// 4. Menú Interactivo
int main() {
    int opcion = 0;

    do {
        cout << "\n=================================\n";
        cout << "   SISTEMA DE PERSONAJES (C++)   \n";
        cout << "=================================\n";
        cout << "[1] Registrar nuevo personaje\n";
        cout << "[2] Ver todos los personajes guardados\n";
        cout << "[3] Salir\n";
        cout << "Seleccione una opción: ";

        if (!(cin >> opcion)) {
            cout << "Opción no válida. Intente de nuevo.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (opcion) {
            case 1:
                registrarPersonaje();
                break;
            case 2:
                verPersonajes();
                break;
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción fuera de rango. Seleccione 1, 2 o 3.\n";
        }
    } while (opcion != 3);

    return 0;
}

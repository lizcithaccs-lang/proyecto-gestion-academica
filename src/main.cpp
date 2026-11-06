#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "SISTEMA DE GESTION ACADEMICA" << endl;
    cout << "Bienvenidos al proyecto" << endl;

    cout << "\n--- REGISTRO DE ESTUDIANTES ---" << endl;

    string nombre;
    string codigo;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese el codigo del estudiante: ";
    getline(cin, codigo);

    cout << "\nESTUDIANTE REGISTRADO CORRECTAMENTE" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Codigo: " << codigo << endl;

    return 0;
}

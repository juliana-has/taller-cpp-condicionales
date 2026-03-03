#include <iostream>
using namespace std;


int main() {
  
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int permisos;
    cout << "Ingrese el valor de permisos (0-7): ";
    cin >> permisos;

    if (permisos & LEER) cout << "Puede LEER\n";
    if (permisos & ESCRIBIR) cout << "Puede ESCRIBIR\n";
    if (permisos & EJECUTAR) cout << "Puede EJECUTAR\n";

    return 0;
}

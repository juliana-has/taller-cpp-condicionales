#include <iostream>
using namespace std;

int main() {

    double saldo = 1000;
    int opcion;
    int transacciones = 0;

    do {
        cout << "\n1. Depositar\n2. Retirar\n3. Consultar\n4. Salir\n";
        cin >> opcion;

        double monto;

        switch(opcion) {

            case 1:
                cout << "Monto: ";
                cin >> monto;
                saldo += monto;
                transacciones++;
                break;


            case 2:
                cout << "Monto: ";
                cin >> monto;

                if (monto <= saldo) {
                    saldo -= monto;
                    transacciones++;

                } else {
                    cout << "No hay platita\n";

                }
                break;

            case 3:
                cout << "Saldo actual: " << saldo << endl;
                break;

        }

    } while(opcion != 4);


    cout << "se realizo la transaccion: " << transacciones;
    return 0;
}

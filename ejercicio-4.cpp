#include <iostream>
#include <cmath>
using namespace std;



int main() {



    double c, e;
    char op;


    
    cout << "Ingrese primer numero: ";
    cin >> c;

    cout << "Ingrese operador (+ - * / %): ";
    cin >> op;

    cout << "Ingrese segundo numero: ";
    cin >> e;

    switch(op) {
        case '+': cout << c + e; break;

        case '-': cout << c - e; break;

        case '*': cout << c * e; break;


        case '/':
            if (e != 0)
                cout << c / e;

            else
                cout << "Error: no divido por cero";
            break;

        case '%':
            if (e != 0)
                cout << fmod(c, e);

            else
                cout << "Error: no divido por cero";
            break;

        default:
            cout << "ese operador no te sirve bro";
    }

    return 0;
}
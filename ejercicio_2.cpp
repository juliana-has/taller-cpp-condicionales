#include <iostream>
#include <cmath>
using namespace std;

int main() {


    double x, y, z;

    cout << "Ingrese los lados: ";

    cin >> x >> y >> z;


    if (x + y > z && x + z > y && y + z > x) {
        cout << "Es un triangulo\n";

        
        if (x == y && y == z)
            cout << "Equilatero\n";
        else if (x == y || x == z || y == z)
            cout << "Isosceles\n";
        else
            cout << "Escaleno\n";


        double A2 = pow(x,2), B2 = pow(y,2), C2 = pow(z,2);
        if (A2 + B2 == C2 || A2 + C2 == B2 || B2 + C2 == A2)
            cout << "Rectangulo\n";
        else if (A2 + B2 > C2 && A2 + C2 > B2 && B2 + C2 > A2)
            cout << "Acutangulo\n";
        else
            cout << "Obtusangulo\n";
    }
    else {
        cout << "No es un triangulo\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int año;

    cout << "Ingrese año: ";
    cin >> año;


    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0))
        cout << "Es bisiesto";


    else
        cout << "No es bisesto";

    return 0;
    
}

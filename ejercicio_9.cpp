#include <iostream>
using namespace std;

int main() {


    double peso, altura;


    cout << "cuanto pesas? (kg): ";
    cin >> peso;

    cout << "Cuanto mides? (m): ";
    cin >> altura;

    double imc = peso / (altura * altura);


    cout << "IMC: " << imc << endl;


    if (imc < 18.5)
        cout << "bajito de peso";

    else if (imc < 25)
        cout << "bien";

    else if (imc < 30)
        cout << "Sobrepeso";

    else if (imc < 35)
        cout << "gordo";

    else
        cout << "muy gordo";


    return 0;
}

#include <iostream>
using namespace std;

int main() {

    double celsius;
    double farenheit;


    cout << "Ingrese temperatura en Celsius: ";
    cin >> celsius;

    farenheit = (celsius * 9 / 5) + 32;

    cout << "T Fahrenheit: " << farenheit << endl;


    
    return 0;
}
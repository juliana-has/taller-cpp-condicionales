#include <iostream>
using namespace std;

int main() {
    char tipoCliente;
    double compra;
    int cupon;
    bool findeSemana;

    cout << "Tipo cliente: ";
    cin >> tipoCliente;
    cout << "Monto compra: ";
    cin >> compra;
    cout << "Codigo cupon (1 o 2): ";
    cin >> cupon;
    cout << "Es finde de semana? (1=si 0=no): ";
    cin >> findeSemana;
    double descuento = 0;
    if (tipoCliente == 'VIP') descuento += 0.10;
    if (compra > 500) descuento += 0.05;
    switch(cupon) {
        case 1: descuento += 0.05; break;
        case 2: descuento += 0.10; break;
    }

    if (findeSemana) descuento += 0.05;
    if (descuento > 0.50) descuento = 0.50;
    double precio pagar = compra * (1 - descuento);
    cout << "Precio pagar: " << precio pagar;

    return 0;
}

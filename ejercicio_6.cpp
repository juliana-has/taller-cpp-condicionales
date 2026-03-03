#include <iostream>
using namespace std;


int main() {

    int x = 26, y = 35;


    //Variable temp
    int temp = x;
    x = y;
    y = temp;



    //Aritmético
    x = x + y;
    y = x - y;
    x = x - y;



    //XOR
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;


    cout << "x: " << x << " y: " << y;



    return 0;
}
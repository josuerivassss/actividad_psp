#include<iostream>
using namespace std;

// PROYECTO 0 ACTIVIDADES PSP

int main() {
    int a, b, resultado;

    cout << "Introduzca el valor del lado A: ";
    cin >> a;
    cout << "Introduzca el valor del lado B: ";
    cin >> b;

    if(a != 0 && b != 0) {
        resultado = a * b;
        if(a == b) cout << "El resultado del área es: " << resultado << " y es un cuadrado";
        else cout << "El resultado del área es: " << resultado;
    } else cout << "Ninguno de los valores puede ser 0";

    return 0;
};

#include<iostream>
using namespace std;

// PROYECTO 1 DE ACTIVIDADES PSP

int main() {
    int a, b, c;
    cout << "Ingresa el valor de A: ";
    cin >> a;
    cout << "Ingresa el valor de B: ";
    cin >> b;
    cout << "Ingresa el valor de C: ";
    cin >> c;

    if((a == 0 && b == 0 && c == 0) || (a < b && a < c && b != 0 && c != 0))
    cout << "Los valores no indican figura";
    else {
        if(a == 0 || b == 0 || c == 0) {
            if((a == b && a != 0) || (b == c && b != 0) || (a == c && a != 0))
            cout << "La figura es un cuadrado";
            else {
                if((a == 0 && b == 0) || (b == 0 && c == 0) || (a == 0 && c == 0))
                cout << "La figura es un circulo";
                else cout << "La figura es un rectangulo";
            }
        } else {
            if(a == b && b == c) cout << "La figura es un triangulo equilatero";
            else {
                if(a == b || b == c || a == c) cout << "La figura es un triangulo isoceles";
                else cout << "La figura es un triangulo escaleno";
            }
        }
    } 

    return 0;
}

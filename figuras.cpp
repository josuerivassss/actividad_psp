#include<iostream>
using namespace std;

// PROYECTO 1 DE ACTIVIDADES PSP

int main() {
    int ladoA, ladoB, ladoC;
    cout << "Ingresa el valor de A: ";
    cin >> ladoA;
    cout << "Ingresa el valor de B: ";
    cin >> ladoB;
    cout << "Ingresa el valor de C: ";
    cin >> ladoC;

    if ((ladoA == 0 && ladoB == 0 && ladoC == 0) || (ladoA < ladoB && ladoA < ladoC && ladoB != 0 && ladoC != 0)) {
        cout << "Los valores no indican figura";
    } else {
        if (ladoA == 0 || ladoB == 0 || ladoC == 0) {
            if ((ladoA == ladoB && ladoA != 0) || (ladoB == ladoC && ladoB != 0) || (ladoA == ladoC && ladoA != 0)) {
                cout << "La figura es un cuadrado";
            } else {
                if ((ladoA == 0 && ladoB == 0) || (ladoB == 0 && ladoC == 0) || (ladoA == 0 && ladoC == 0)) {
                    cout << "La figura es un circulo";
                } else {
                    cout << "La figura es un rectangulo";
                }
            }
        } else {
            if (ladoA == ladoB && ladoB == ladoC) {
                cout << "La figura es un triangulo equilatero";
            } else {
                if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
                    cout << "La figura es un triangulo isoceles";
                } else {
                    cout << "La figura es un triangulo escaleno";
                }
            }
        }
    }

    return 0;
}

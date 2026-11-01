#include<iostream>
#include<cctype>
#include<cmath>
using namespace std;

const float PI = 3.14; // no es variable, es una constante

// Prototipos
string aMinuscula(string texto);
string determinarFigura(int ladoA, int ladoB, int ladoC);
float calcularArea(string figura, int ladoA, int ladoB, int ladoC);
void solicitarValores(int *a, int *b, int *c);

int main() {
    // declaracion
    int *a = new int;
    int *b = new int;
    int *c = new int;
    string figura = "NO_INDICADA";

    int opcion;
    do {
        cout << "Escoja la opcion:" << endl;
        cout << "1. Determine figura." << endl;
        cout << "2. Calcule area." << endl;
        cout << "3. Salir" << endl << ":> ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                solicitarValores(a, b, c);
                figura = determinarFigura(*a, *b, *c);
                if(figura == "NO_INDICADA") {
                    cout << "Los valores no indican figura";
                } else {
                    cout << "La figura es un " << aMinuscula(figura);
                }
                cout << endl;
                break;
            case 2:
                if(figura == "NO_INDICADA") {
                   cout << "Primero debera determinar la figura en la opcion 1"; 
                } else {
                    cout << "El area del " << figura << " es " << calcularArea(figura, *a, *b, *c);
                }
                cout << endl;
                break;
            default:
                break;
        }
    } while (opcion != 3); // sale del programa
    // se limpian los punteros
    a = NULL;
    b = NULL;
    c = NULL;
    cout << "Hasta la proxima" << endl;
}

string aMinuscula(string texto) {
    string resultado = "";
    for(char c : texto) {
        resultado += (char)tolower(c);
    }
    return resultado;
}

string determinarFigura(int ladoA, int ladoB, int ladoC) {
    string figura;
    if ((ladoA == 0 && ladoB == 0 && ladoC == 0) || (ladoA < ladoB && ladoA < ladoC && ladoB != 0 && ladoC != 0)) {
        figura = "NO_INDICADA";
    } else {
        if (ladoA == 0 || ladoB == 0 || ladoC == 0) {
            if ((ladoA == ladoB && ladoA != 0) || (ladoB == ladoC && ladoB != 0) || (ladoA == ladoC && ladoA != 0)) {
                figura = "CUADRADO";
            } else {
                if ((ladoA == 0 && ladoB == 0) || (ladoB == 0 && ladoC == 0) || (ladoA == 0 && ladoC == 0)) {
                    figura = "CIRCULO";
                } else {
                    figura = "RECTANGULO";
                }
            }
        } else {
            if (ladoA == ladoB && ladoB == ladoC) {
                figura = "TRIANGULO EQUILATERO";
            } else {
                if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
                    figura = "TRIANGULO ISOCELES";
                } else {
                    figura = "TRIANGULO ESCALENO";
                }
            }
        }
    }
    return figura;
}

float calcularArea(string figura, int ladoA, int ladoB, int ladoC) {
    float resultado;
    if(figura == "CUADRADO" || figura == "RECTANGULO") {
        resultado = ladoA * ladoB;
    } else if (figura == "CIRCULO") {
        resultado = PI * (ladoA * ladoA);
    } else if(figura == "TRIANGULO EQUILATERO") {
        resultado = (float)(sqrt(3)*(ladoA * ladoA)/4);
    } else if(figura == "TRIANGULO ISOCELES") {
        double s = (ladoA + ladoB + ladoC) / 2.0;
        resultado = (float)sqrt(s * (s - ladoA) * (s - ladoB) * (s - ladoC));
    } else if(figura == "TRIANGULO ESCALENO") {
        double s = (ladoA + ladoB + ladoC) / 2.0;
        resultado = (float)sqrt(s * (s - ladoA) * (s - ladoB) * (s - ladoC));
    }
    return resultado;   
}

void solicitarValores(int *a, int *b, int *c) {
    cout << "Ingresa el valor de A: ";
    cin >> *a;
    cout << "Ingresa el valor de B: ";
    cin >> *b;
    cout << "Ingresa el valor de C: ";
    cin >> *c;
}
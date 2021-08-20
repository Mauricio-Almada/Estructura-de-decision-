/*Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
teclado la longitud de los tres lados de un triángulo y luego listar que tipo de
triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.*/

#include <iostream>
using namespace std;

int main(){

    float lado1, lado2, lado3;

    cout << "Ingresar longitud de los tres lados de un triangulo: " << endl;
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3 && lado1 == lado3){
        cout << "\nEl triangulo es Equilatero" << endl;
        cout << "Tiene todos sus lados iguales" << endl;
    }
    else{
        if(lado1 == lado2 || lado1 == lado3 || lado2 == lado1 || lado2 == lado3 || lado3 == lado1 || lado3 == lado2){
            cout << "\nEl triangulo es Isosceles" << endl;
            cout << "Tiene dos, de sus tres lados, iguales" << endl;
        }
        else{
            if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
                cout << "\nEl triangulo es Escaleno" << endl;
                cout << "Tiene sus tres lados opuestos" << endl;
            }
        }
    }



    return 0;
}

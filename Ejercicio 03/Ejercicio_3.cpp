/*Hacer un programa para ingresar por teclado un n?mero y luego informar por
pantalla con un cartel aclaratorio si el mismo es par o impar.*/

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "Ingresar un numero: ";
    cin >> numero;

    if (numero % 2 == 0){
        cout << "Es par";
    }
    else{
        cout << "Es impar";
    }



    return 0;
}

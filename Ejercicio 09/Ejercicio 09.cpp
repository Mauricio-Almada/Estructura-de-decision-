/*Hacer un programa para ingresar tres números y listar el máximo de ellos.*/

#include <iostream>
using namespace std;

int main(){
    int numero1, numero2, numero3, numeroMaximo;

    cout << "Ingresar tres numeros: ";
    cin >> numero1 >> numero2 >> numero3;

    if (numero1 > numero2 && numero1 > numero3){
        cout << "El mayor es el: " << numero1;

    }
    else if (numero2 > numero1 && numero2 > numero3){
        cout << "El mayor es el: " << numero2;
    }
    else if (numero3 > numero1 && numero3 > numero2 ){
        cout << "El mayor es el: " << numero3;
    }












    return 0;
}

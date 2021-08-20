/*Hacer un programa para ingresar por teclado dos números y luego informar por
pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.*/

#include <iostream>
using namespace std;

int main(){

    int numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero2 % numero1 == 0){
       cout << endl << "El " << numero1 << " es multiplo de " << numero2 << endl;
    }
    else{
        cout << endl << "El " << numero1 << " no es multiplo de " << numero2 << endl;
    }








    return 0;
}

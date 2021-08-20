/*Hacer un programa para ingresar por teclado tres números y luego determinar e
informar con una leyenda aclaratoria si los tres son iguales entre sí, caso
contrario no emitir nada. Ayuda: Si A es igual a B y B es igual a C, entonces A y C
son iguales.*/

#include <iostream>
using namespace std;

int main(){

    int numero1, numero2, numero3;

    cout << "Ingrese tres numeros: ";
    cin >> numero1 >> numero2 >> numero3;

    if (numero1 == numero2 && numero2 == numero3 && numero1 == numero3){
        cout << "Los tres numeros son iguales" << endl;
    }






    return 0;
}

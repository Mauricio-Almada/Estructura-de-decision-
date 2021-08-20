/*Hacer un programa para ingresar por teclado tres números e informar con una
leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no
emitir nada. Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que
A y C sean distintos. Ejemplo: A=8, B=6 y C=8.*/

#include <iostream>
using namespace std;

int main(){
    int numero1, numero2, numero3;

    cout << "Igresar tres numeros: ";
    cin >> numero1;
    cin >> numero2;
    cin >> numero3;

    if (numero1 != numero2 && numero1 != numero3 && numero2 != numero1 && numero2 != numero3 && numero3 != numero1 != numero3 != numero2){
        cout << "Los tres numeros son distintos";
    }







    return 0;
}

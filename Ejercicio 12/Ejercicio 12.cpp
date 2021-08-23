/*Hacer un programa para leer tres números diferentes y determinar e informar el
número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.*/

#include <iostream>
using namespace std;

int main(){
    int numero1, numero2, numero3, medio;

    cout << "Ingrese tres numeros: ";
    cin >> numero1 >> numero2 >> numero3;

    if ((numero1 > numero2 && numero1 < numero3) || (numero1 < numero2 && numero1 > numero3)){
        medio = numero1;
    }
    else{
        if((numero2 > numero1 && numero2 < numero3) || (numero2 < numero1 && numero2 > numero3)){
            medio = numero2;
        }
        else{
            medio = numero3;
        }
    }

    cout << "El numero del medio es: " << medio;




    return 0;
}

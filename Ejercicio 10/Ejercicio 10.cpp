/*Hacer un programa para ingresar cinco números y listar el máximo de ellos.*/

#include <iostream>
using namespace std;

int main(){

    int numero1, numero2, numero3, numero4, numero5, numeroMayor;


    cout << "Ingresar cinco numeros: ";
    cin >> numero1 >> numero2 >> numero3 >> numero4 >> numero5;

    if (numero1 > numero2 && numero1 > numero3 && numero1 > numero4 && numero1 > numero5){
        numeroMayor = numero1;
    }
    else if (numero2 > numero3 && numero2 > numero4 && numero2 > numero5){
        numeroMayor = numero2;
    }
    else if (numero3 > numero4 && numero3 > numero5){
        numeroMayor = numero3;
    }
    else if (numero4 > numero5){
        numeroMayor = numero4;
    }
    else{
        numeroMayor = numero5;
    }


    cout << "\nEl mayor de los cinco numeros es: " << numeroMayor;






    return 0;
}

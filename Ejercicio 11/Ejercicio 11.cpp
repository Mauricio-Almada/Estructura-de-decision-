/*Hacer un programa para ingresar cinco n�meros y listar cu�ntos de esos cinco
n�meros son positivos.*/

#include <iostream>
using namespace std;

int main(){

    int numero, contador = 0;

    cout << "---INGRESAR CINCO NUMEROS---" << endl;

    cout << "\nIngrese el primer numero: ";
    cin >> numero;

    if (numero >= 0){
        contador++;
    }

    cout << "Ingrese el segundo numero: ";
    cin >> numero;

    if (numero >= 0){
        contador++;
    }

    cout << "Ingrese el tercer numero: ";
    cin >> numero;

    if (numero >= 0){
        contador++;
    }

    cout << "Ingrese el cuarto numero: ";
    cin >> numero;

    if (numero >= 0){
        contador++;
    }

    cout << "Ingrese el quinto numero: ";
    cin >> numero;

    if (numero >= 0){
        contador++;
    }

    cout << "\nLos numeros positivos ingresados fuero: " << contador;




    return 0;
}

/*Hacer un programa para ingresar por teclado un número y luego emitir por
pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.*/

#include <iostream>
using namespace std;

int main(){
   int numero;

   cout << "Ingrese un numero: ";
   cin >> numero;

   if (numero > 0){
        cout << "Es positivo" << endl;
   }
    else{
        if(numero < 0){
            cout << "Es negativo" << endl;
        }
        else{
            cout << "Es cero" << endl;
        }
   }





    return 0;
}

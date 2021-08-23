/*Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
siguientes condiciones:
- �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los
ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.*/

#include <iostream>

using namespace std;

int main(){

    int nota1, nota2, nota3, nota4, contador = 0;

    cout << "---INGRESAR CUATRO NOTAS---" << endl;

    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout << "Nota 3: ";
    cin >> nota3;
    cout << "Nota 4: ";
    cin >> nota4;

    if ((nota1 >= 7) && (nota2 >= 7) && (nota3 >= 7) && (nota4 >= 7)){
        cout << "\nPromociona" << endl;
    }
    else{
        if (nota1 >= 4){
            contador++;
        }
        if (nota2 >= 4){
            contador++;
        }
        if (nota3 >= 4){
            contador++;
        }
        if (nota4 >= 4){
            contador++;
        }
    }

    if(contador >= 3){
        cout << "\nRinde final" << endl;
    }
    else{
        if (contador >= 1){
            cout << "\nRecupera parcial" << endl;
        }
        else{
            cout << "\nRecursa la materia" << endl;
        }
    }

    return 0;
}

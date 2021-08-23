/*Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
siguientes condiciones:
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.*/

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

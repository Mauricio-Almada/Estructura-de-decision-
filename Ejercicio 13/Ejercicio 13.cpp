/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una
persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar
la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular
luego la edad en años de esa persona y listarlo por pantalla.*/

#include <iostream>
using namespace std;

int main(){

    int diaActual, mesActual, anioActual, diaNacimiento, mesNacimiento, anioNacimiento, edad;

    cout << "---FECHA DE NACIMIENTO---" << endl;

    cout << "Dia: ";
    cin >> diaNacimiento;
    cout << "Mes: ";
    cin >> mesNacimiento;
    cout << "Anio: ";
    cin >> anioNacimiento;

    cout << "---FECHA ACTUAL---" << endl;

    cout << "Dia: ";
    cin >> diaActual;
    cout << "Mes: ";
    cin >> mesActual;
    cout << "Anio: ";
    cin >> anioActual;

    if(diaActual <= diaNacimiento || diaActual >= diaNacimiento && mesActual >= mesNacimiento){
        edad = anioActual - anioNacimiento;
    }
    else{
        edad = (anioActual - anioNacimiento) - 1;
    }
    cout << "\nSu edad es de: " << edad << " anios";









    return 0;
}

/*Un negocio de perfumería efectúa descuentos según el importe de la venta. - Si
el importe es menor a $100 aplicar un descuento del 5% - Si el importe es entre
$100 y hasta $500 aplicar un descuento del 10% - Si el importe es mayor a $500
aplicar un descuento del 15% Hacer un programa donde se ingresa el importe
original sin descuento y que se informe por pantalla el importe con el descuento
ya aplicado.*/

#include <iostream>
using namespace std;

int main(){

    /*const int DESCUENTO5 = 0.05, DESCUENTO10 = 0.10, DESCUENTO15 = 0.15;*/
    float venta, importeApagar, descuento;

    cout << "Ingrese importe de venta: $";
    cin >> venta;

    if (venta < 100){
        descuento = venta * 0.05;
        importeApagar = venta - descuento;
    }
    else{
        if(venta >= 100 && venta <= 500){
            descuento = venta * 0.10;
            importeApagar = venta - descuento;
        }
        else{
            if(venta > 500){
                descuento = venta * 0.15;
                importeApagar = venta - descuento;
            }
        }
    }

    cout << "Su venta ha sido de: $" << venta << endl;
    cout << "Y el total a pagar es de: $" << importeApagar << endl;





    return 0;
}

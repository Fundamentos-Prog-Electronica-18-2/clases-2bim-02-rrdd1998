#include <iostream>

// generar una solucion que permita obtener el area de:
// un cuadrado
// un rectangulo
// y un circulo

using namespace std;
double obtenerAreaCuadrado(double lado){
double    resultado = lado * lado;
    return resultado;
}
double obtenerAreaRectangulo(double base, double altura){
double   resultado = base * altura ;
    return resultado;
}
double obtenerAreaCirculo(double radio){
double    resultado = 3.1416 * radio * radio;
    return resultado;
}

int main()
{
    int opcion = 0;
    double lado = 0;
    double base = 0;
    double altura = 0;
    double radio = 0;
    double resultado = 0;
    cout << "Ingrese la opcion: 1. cuadrado 2. rectangulo 3. circulo" << endl;
    cin >> opcion;
    if (opcion == 1){
        cout << "Ingrese el valor del lado del cuadrado" << endl;
        cin >> lado;
        resultado = obtenerAreaCuadrado(lado);
        cout << "El valor del �rea del cuadrado es: " << resultado << endl;
    }else{
        if(opcion == 2){
            cout << "Ingrese el valo de la base " << endl;
            cin >> base;
             cout << "Ingrese el valo de la altura " << endl;
            cin >> altura;
            resultado = obtenerAreaRectangulo(base, altura);
            cout << "El valor del �rea del rectangulo es: " << resultado << endl;
        }else{
            if(opcion==3){
            cout << "Ingrese el valo de la radio " << endl;
            cin >> radio;
                resultado = obtenerAreaCirculo(radio);
                cout << "El valor del �rea del circulo es: " << resultado << endl;
            }else{
                cout << "existe un error en la opcion seleccionada" << endl;
            }
        }
    }
    return 0;
}

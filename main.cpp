
/*
Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
*/

#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Ingrese la dimension de cuadrado: ";
    cin >> n;

    for(int i = 0; i < n; i ++){

        //Imprime ++++ al inicio
        if(i == 0){
            for(int i = 0; i < n; i ++){
                cout << "+";
            }
        }

        //Imprime ++++ al final
        else if(i == n-1){
            for(int i = 0; i < n; i ++){
                cout << "+";
            }
        }

        //Imprime +  + intermedios
        else {

            for(int i = 0; i < n; i ++){

                //Imprime + de lado izquierdo
                if(i == 0){
                        cout << "+";
                }

                //Imprime + de lado derecho
                else if(i == n-1){
                        cout << "+";
                }

                //Imprime " " intermedios
                else{
                        cout << " ";
                }
            }
        }

        //Saltos de linea entre iteracion
    cout << endl;
    }

    return 0;

}

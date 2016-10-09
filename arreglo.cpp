#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    //Declaración de variables
    int option, num1, num2, result, arreglo_numsave[10], cont=0;
    bool flag = 0;
for (int i = 0; i < 10; ++i){
	arreglo_numsave[i] = 0;
}
    while(flag == 0){

    //Menú
    cout << "********* HOLA, ESTA ES LA CALCULADORA ************" << endl;

    cout << "1.- Sumar" << endl;
    cout << "2.- Restar" << endl;
    cout << "3.- Multiplicar" << endl;
    cout << "4.- Dividir" << endl;
    cout << "5.- Ver todos los resultados" << endl;
    cout << "6.- Salir" << endl;


    cin >> option;
        switch(option){
        case 1:
            cout << "Ingrese primer sumando" << endl;
            cin >> num1;
            cout << "Ingrese segundo sumando" << endl;
            cin >> num2;
            result = num1 + num2;
            cout << result << endl;
            arreglo_numsave[cont] = result;
            cont++; // cont = cont + 1;
            break;

        case 2:
            cout << "Ingrese primer numero de su resta" << endl;
            cin >> num1;
            cout << "Ingrese segundo numero de su resta" << endl;
            cin >> num2;
            result = num1 - num2;
            cout << result << endl;
            break;

        case 3:
            cout << "Ingrese primer numero a Multiplicar" << endl;
            cin >> num1;
            cout << "Ingrese segundo numero a Multiplicar" << endl;
            cin >> num2;
            result = num1 * num2;
            cout << result << endl;
            break;
    
        case 4:
            cout << "Ingrese primer divisor" << endl;
            cin >> num1;
            cout << "Ingrese segundo divisor" << endl;
            cin >> num2;
            result = num1 / num2;
            cout << result << endl;
            break;

        case 5:
            for (int i=0 ; i < 10 ; i++){
                cout << arreglo_numsave[i] << endl;
            }
            break;

        case 6:
            cout << "USTED ESTA SALIENDO DE LA CALCULADORA" << endl;
            flag = 1;
            break;


             }
         }



    return 0;
}




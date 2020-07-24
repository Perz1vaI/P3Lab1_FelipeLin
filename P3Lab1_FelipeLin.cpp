#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int menu;
    cout << "1. Ejercicio 1\n2. Ejercicio 2 \n3. Salida\n";
    cout << "Ingrese la opcion: ";
    cin >> menu;
    while (menu != 3)
    {

        switch (menu)
        {
        case 1:
        {
            double x, result;
            cout << "Ingrese la x: ";
            cin >> x;
            result = 1 / (1 + exp(-x));

            cout << "La respuesta de la funcion es: " << result << "\n";
            result = 0;
            break;
        }
        case 2:
        {
            double x2, result2, calculo;
            cout << "Ingrese la s: ";
            cin >> x2;
            for (int i = 0; i <= x2; i++)
            {
                cout << ((2 * i) - 1);
                cout << ((2 * i) + 1);
                calculo = calculo + ((2 * i) - 1) * ((2 * i) + 1);
            }
            result2 = calculo;
            cout << "La respuesta de la funcion es: " << result2 << "\n";
            result2 = 0;
            break;
        }
        default:
            cout << "No existe esa opcion\n";

            break;
        }

        cout << "1. Ejercicio 1\n2. Ejercicio 2 \n3. Salida\n";
        cout << "Ingrese la opcion: ";
        cin >> menu;
    }
}
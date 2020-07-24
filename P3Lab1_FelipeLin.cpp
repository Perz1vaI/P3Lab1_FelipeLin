#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int menu;
    cout << "1. Ejercicio 1\n2. Ejercicio 2\n3. Salida\n";
             
    cout << "Ingrese la opcion: ";
    cin >> menu;
    while (menu != 3)
    {

        switch (menu)
        {
        case 1:
        {
            double x, resultado_1 = 0;
            cout << "Ingrese la x: ";
            cin >> x;
            resultado_1 = 1 / (1 + exp(-x));

            cout << "La respuesta de la funcion es: " << resultado_1 << "\n";
            break;
        }
        case 2:
        {
            double s, resultado_2 = 0, calculo = 0;
            cout << "Ingrese la s: ";
            cin >> s;
            for (int i = 0; i <= s; i++)
            {
                calculo = calculo + ((2 * i) - 1) * ((2 * i) + 1);
            }
            resultado_2 = calculo;
            cout << "La respuesta de la funcion es: " << resultado_2 << "\n";
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
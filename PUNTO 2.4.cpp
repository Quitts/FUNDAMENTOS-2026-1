#include <iostream>
using namespace std;

bool ESperfecto (int m)
{
    int suma = 0;
    int primero = 1;

    cout<< " sus divisores son: ";

    for (int l = 1 ; l < m; l= l + 1)
    {
        if (m % l == 0)
        {  
            if ( primero == 0 )
            {
            cout << " + ";
            }

            cout << l;
            suma = suma + l;
            primero = 0;    
        }
    }

    cout << " = " << suma << endl;
    return (suma == m);                         
    
}

int main()
{
    int numero;

    cout << "Dame un numero chamo : ";
    cin >> numero;

    if (numero > 0)
    {
        if (ESperfecto(numero) == 1)
        {
            cout << numero << " es un numero perfecto" << endl;
        }
        else
        {
            cout << numero << " no es un numero perfecto" << endl;
        }
    }

    return 0;
}
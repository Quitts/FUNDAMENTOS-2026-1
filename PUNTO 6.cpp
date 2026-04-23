#include <iostream>
using namespace std;

int main();
{
    int m;
    int factores = 0;
    int div = 2;

    cout<< "bro dame un numerito: "<< endl;
    cin>> m;

    int original= m;
    cout<< original << " = ";

    if (m <= 1)
    {
        cout<< "numero no valido: "<< endl;
        return 0;
    }

    while (m > 1)
    {
        if ( m % div == 0)
        {
            cout<< div;
            m = m/div;
            factores= factores + 1;

            if ( m > 1)
            {
              cout<< " X ";
            }

        }
        else
        {
            div++;
        }
        
    }
    cout<<endl;

    cout<< "cantidad de factores: "<< factores<< endl;
    if ( factores == 1)
    {
        cout<< "el numero es primo chaval"<< endl;
    }
    else
    {
        cout<< "el numero no es primo chaval"<< endl;
    }
    return 0;

}
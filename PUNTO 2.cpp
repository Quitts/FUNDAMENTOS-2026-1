#include <iostream>
using namespace std;

int main()
{
    int m;
    int acumulado = 0;

    while(true)
    {
        cout<< "rueda ahi un numero de 0 - 6 :";
        cin>> m;

        if ( m < 0 || m > 6)
        {
            cout<< "repite numero que haci no era :"<<endl;
            continue;
        }
        if (m == 1)
        {
            acumulado = 0;
            cout<< "perdite todo bobo: 0"<<endl;
            break;
        }
        if (m == 0)
        {
            cout<< "acabaste el juego:"<<acumulado<<endl;
            break;
        }
        acumulado = acumulado + m;
        cout<< "acumulado:"<< acumulado <<endl;
    }
    return 0;

}
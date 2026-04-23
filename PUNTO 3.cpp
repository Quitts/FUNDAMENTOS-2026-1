#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float m;
    float sum = 0;
    float min = 6;
    float max = -1;
    int reprobados = 0, aprobados = 0, contador = 0;

    while(true)
    {
        cout<< "dame tus notas bro:"<< endl;
        cin>> m;    
        if (m == -1)
        {
            break;
        }
        if(m < 0 || m > 5)
        {
            cout<< "oh na na na esa nota no esta en mi rango bro" <<endl;
            continue;
        }

        sum = sum + m;
        contador++;

        if(m > max)
        {
            max = m;
        }
        if(m < min)
        {
            min = m;
        }
        if(m >= 3.0)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    } 
    if(contador == 0)
    {
        cout<< "no se que haces con tu vida bro"<< endl;
    }
    else 
    {
        float promedio = sum / contador;

        cout<< "resultado: "<<endl;
        cout<< "cantidad:"<<contador<<endl;
        cout<< "promedio:"<<setprecision(2)<<promedio<<endl;
        cout<< "maxima:"<<max<<endl;
        cout<< "minima:"<<min<<endl;
        cout<< "aprobados:"<<aprobados<<endl;
        cout<< "reprobados:"<<reprobados<<endl;
    }
    return 0;
}
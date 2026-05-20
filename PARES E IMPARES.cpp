#include <iostream>
#include <vector>
using namespace std;    

int main()
{
    vector<int> par;
    vector<int> impar;
    int m, sumaP = 0, sumaI = 0, promP = 0, promI = 0, l;

    while (m != 0)
    {
        if (m % 2 == 0)
        {
            par.push_back(m);
            sumaP = sumaP + m;
        }
        else
        {
            impar.push_back(m);
            sumaI = sumaI + m;
        }

        cout << "dame un numero: ";
        cin >> m;


    }

    for (int i = 0; i < par.size(); i++)
    {
        cout << "par: " << par[i] << endl;
    }
    for (int i = 0; i < impar.size(); i++)
    {
        cout << "impar: " << impar[i] << endl;
    }

    l = par.size();
    
    if (l != 0)
    {
        promP = sumaP / l;
    }
    else
    {
        cout << "no se ingresaron numeros pares" << endl;
    }

    l = impar.size();

    if (l != 0)
    {
        promI = sumaI / l;
    }
    else
    {
        cout << "no se ingresaron numeros impares" << endl;
    }

    cout << "sumando los pares da: " << sumaP << endl;
    cout << "sumando los impares da: " << sumaI << endl;
    cout << "el promedio de los pares es: " << promP << endl;
    cout << "el promedio de los impares es: " << promI << endl;
}
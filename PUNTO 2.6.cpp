#include <iostream>
#include <string>
using namespace std;

string cambiomayuscula( string palabra )
{
    if (palabra.length() > 0 && palabra[0] >= 'a' && palabra[0] <= 'z')
    {
        palabra[0] = palabra[0] - 32;
    }
    return palabra;
}

int main()
{
    string frase, palabra = "";
    cout << "bro dame una frase: ";
    getline(cin, frase);

    for (int l = 0; l <= frase.length(); l++)
    {
        if (l == frase.length() || frase[l] == ' ')
        {
            if (palabra != "")
            {
                cout << cambiomayuscula(palabra) << " ";
                palabra = "";
            }
        }
        else 
        {
            palabra += frase[l];
        }
    }
    cout<<endl;
    return 0;
}
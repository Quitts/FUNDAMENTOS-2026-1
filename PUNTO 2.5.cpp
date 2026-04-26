#include <iostream>
#include <string>
using namespace std;

int contar( string clave )
{
    int cont = 0;
    for (int l = 0; l < clave.length(); l = l + 1)
    {
        if( clave[l] >= '0' && clave[l] <= '9')
        {
            cont = cont + 1;
        }
    }
    return cont;
}

int mayusculas( string clave)
{
    for (int l = 0; l < clave.length(); l = l + 1 )
    {
        if (clave[l] >= 'A' && clave[l] <= 'Z')
        {
            return 1;
        }
    }
    return 0;
}

int minusculas( string clave)
{
    for (int l = 0; l < clave.length(); l = l + 1 )
    {
        if (clave[l] >= 'a' && clave[l] <= 'z')
        {
            return 1;
        }
    }
    return 0;
}

string seguridad( string clave)
{
   int cont = 0;

   if (clave.length() >= 8) cont = cont + 1;
   if (mayusculas(clave)==1) cont++;
   if (minusculas(clave)==1) cont++;
   if (contar(clave) > 0) cont++;

   if (cont == 4)
   {
    return "segurisima chamo";
   }
   else if (cont >= 2)
   {
    return "pues digamos que segura";
   }
   else
   {
    return "mejor no tengas clave";
   }
}

int main()
{
    string clave;

    cout << "dame tu clave bro: ";
    getline(cin, clave);
    cout << "nivel de seguridad: " << seguridad(clave) << endl;
    cout << "número de dígitos: " << contar(clave) << endl;
    return 0;
}   
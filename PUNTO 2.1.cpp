#include <iostream>
using namespace std;

int invertir (int n)
{
    int invertido = 0;

    while (n > 0)
    {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }

    return invertido;
}

int espalindromo (int n)
{
    int invertido = invertir(n);
    if( n == invertido)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int main()
{
  int m;

  cout << "Ingrese un numero: ";
  cin >> m;

  if (espalindromo(m))
  {
    cout << m << " es un palindromo." << endl;
  }
  else
  {
    cout << m << " no es un palindromo." << endl;
  }

  return 0;

}
#include <iostream>
using namespace std;

int calmcd( int m, int l)
{
    while (l != 0)
    {
        int result = m % l;
        m = l;
        l = result;

    }
    return m;

}

int calmcm(int m, int l)
{
  int mcd = calmcd(m, l);
  return (m * l)/mcd;

}

int main()
{
    int m, l;
    int result = 0;
    

    cout << " dame un numero chamo: "<< endl;
    cin >> m;
    cout << " dame otro numero chamo: "<< endl;
    cin >> l;

    if (m > 0 && l > 0)
    {
        int mcd = calmcd(m,l);
        int mcm = calmcm(m,l);

        cout << " el mcd es: " << mcd << endl;
        cout << " el mcm es: " << mcm << endl;
    }
    else
    {
        cout<< "dame son numeros positivos chamo" << endl;
    }
    return 0;

}
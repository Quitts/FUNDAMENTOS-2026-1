#include <iostream>
using namespace std;

int main ()
{
    long long m;
    int num = 0;

    cout<< "holas bro dame un numero"<< endl;
    cin >> m;
    long long max = m; 

    if(m <= 1)
    {
        cout << "ese numero no va" <<endl;
        return 0;
    } 

    cout<< m;  

    while (m != 1)
    {
        if (m % 2 == 0)
    {
        m = m / 2;
    }
    else
    {
        m = m * 3 + 1;
    }

    cout << " -> " << m; 
    num = num + 1;

    if ( m > max )
    {
      max = m;
    }
    }
    cout << endl;
    cout << "pasos:" << num << endl;
    cout << "valor maximo: " << max << endl;

    return 0;
} 
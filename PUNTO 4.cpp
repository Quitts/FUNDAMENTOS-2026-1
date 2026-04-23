#include <iostream>
using namespace std;

int main()
{
    int m;
    cout<< "oye brosito dame un numerito entre (1 - 255): "<< endl;
    cin>> m;

    if (m < 1 && m > 255)
    {
        cout<< "bro dame otro numero ese no es correcto"<< endl;
        return 0;
    }

    int temp = m;
    int bin[20];
    int l = 0;

    while (temp > 0)
    {
        bin[l] =temp % 2;
        temp = temp / 2;
        l = l + 1;
    }

    cout<< m << "en base 2 es:"<< endl;

    for (int t = l - 1; t >= 0; t = t-1)
    {
        cout<< bin[t];
    }
    cout<< endl;

    temp = m;
    int hex[20];
    l = 0;

    while (temp > 0)
    {
        hex[l] = temp % 16;
        temp = temp / 16;
        l = l + 1;
    }

    cout<< m << "en base 16 es:"<< endl;

    for (int t = l - 1; t >= 0; t = t-1)
    {
        if (hex[t] < 10)
        {
            cout << hex[t];
        }
        else
        {
            cout<< char(hex[t] + 55);
        }
    }
    cout<< endl;

    return 0;

}
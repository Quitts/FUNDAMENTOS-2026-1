#include <iostream>
#include <string>
using namespace std;

string censura (string m)
{
    for (int l = 0; l < m.length(); l = l + 1)
    {
        char t = m[l];

        if (t == 'A') t = 'a';
        if (t == 'E') t = 'e';
        if (t == 'I') t = 'i';
        if (t == 'O') t = 'o';
        if (t == 'U') t = 'u';

        if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
        {
            m[l] = '*';
        }
    }

   return m;
}

int main()
{
    string frase;

    cout<< "dame una frase bro:";
    getline(cin, frase);

    cout << censura(frase);

    return 0;
}
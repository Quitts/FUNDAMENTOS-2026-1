#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int m;
    cout << "dame los numeros : ";
    cin >> m;

    vector<int> numeros(m);
    vector<int> Mayormedia;

    int suma = 0;
    cout << "vector : ";

    for (int l = 0; l < m; l++)
    {
        numeros[l] = rand() % 11;
        suma += numeros[l];
        cout << numeros[l] << " ";
    }

    double media = (double)suma / m;
    cout << "\nmedia : " << media << endl;

    for (int l = 0; l < m; l++)
    {
        if (numeros[l] > media)
        {
            Mayormedia.push_back(numeros[l]);
        }
    }

    cout << "numeros mayores a la media : ";

    for (int l = 0; l < Mayormedia.size(); l++)
    {
        cout << Mayormedia[l] << " ";
    }

    cout << endl;
    return 0;
}
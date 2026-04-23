#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int fact(int x)
{
    int prod = 1, i;
    for (i = 1; i <= x; i++)
    {
        prod = prod * i;
    }
    return prod;
}

float senx( int n, int angulo)
{
    int n, i, angulo;
    float x, sum = 0.0;
    x = (3.14159/180) * angulo;
    for (i = 0; i <= n; i++)
    {
        sum = sum + ((pow(-1, i)) * (pow(x, 2*i + 1))) / (fact(2 * i + 1));
    }
    cout << "seno de " << angulo << "es igual a: " << setprecision(20) << suma << endl;
}
float cosx( int n, int angulo)
{
    int n, i, angulo;
    float x, sum = 0.0;
    x = (3.14159/180) * angulo;
    for (i = 0; i <= n; i++)
    {
        sum = sum + ((pow(-1, i)) * (pow(x, 2 * i))) / (fact(2 * i));
    }
    cout << "coseno de " << angulo << "es igual a: " << setprecision(20) << suma << endl;
}
int main()
{
    int n, i, angulo;
    float x, sum = 0.0;
    cout<< "cuanto decimales quieres chamo??:";
    cin>> n;
    cout<< "un angulo chamo:";
    cin>> angulo;
}
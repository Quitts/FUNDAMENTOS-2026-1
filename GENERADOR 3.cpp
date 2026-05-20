#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib> 

using namespace std;

//verificar si es primo el numero//

bool Primo(int m)
{
    if (m <= 1) 
    return false;

    for (int l = 2; l <= sqrt(m); l++)
    {
        if (m % l == 0)
        return false;
    }
    return true;
}

//generar matriz con numero aleatorios//

int main()
{
        srand(time(0));

    int t;
    cout << "ingresa numeros para la prueba: ";
    cin >> t;

    vector<vector<int>> matriz(t, vector<int>(t));

    cout << "Matriz generada:" << endl;
    for (int n = 0; n < t; n++)
    {
        for (int m = 0; m < t; m++)
        {
            matriz[n][m] = rand() %51; //genera los numero del 1 al 50//
            cout << matriz[n][m] << " ";
        }
        cout << endl;
    }


int diagprimera = 0;
int diagsegunda = 0;

for (int n = 0; n < t; n++)
{
    diagprimera += matriz[n][n];
    diagsegunda += matriz[n][t - n - 1];
}

cout << "la diagonal principal es: " << diagprimera << endl;
cout << "la diagonal secundaria es: " << diagsegunda << endl;

vector<int> filas(n);
vector<int> columnas(n);
vector<int> resultados(n);

for (int i = 0; i < t; i++)
{
    fila[i] = matriz[0][i];
}
for (int i = 0; i < t; i++)
{
    columna[i] = matriz[i][ t - 1 ];
}
for (int i = 0; i < t; i++)
{
    int 2fila = pow(fila[i], 2);
    int 2columna = pow(columna[i], 2);

    resultados[i] = 2fila + 2columna;
}

cout << "Resultados de la suma de los cuadrados de las filas y columnas: " << endl;

for (int i = 0; i < t; i++)
{
    cout<< resultados[i] << " ";
}
cout << endl;

int cantprimos = 0;

for (int i = 0; i < t; i++)
{
    for (int a = 0; a < t; a++)
    {
        if (Primo(matriz[i][a]))
        {
            cantprimos++;
        }
    }
}

cout << "Cantidad de numeros primos en la matriz: " << cantprimos << endl;

int pares = 0;
int impares = 0;
int div3 = 0;

for ( int i = 0; i < t; i++)
{
    for (int a = 0; a < t; a++)
    {
        if (matriz[i][a] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }

        if (matriz[i][a] % 3 == 0)
        {
            div3++;
        }
    }
}

cout << "Cantidad de numeros pares: " << pares << endl;
cout << "Cantidad de numeros impares: " << impares << endl;
cout << "Cantidad de numeros divisibles por 3: " << div3 << endl;

vector<int>sumcolumnas(n);

cout << "TABLA" << endl;
cout << "suma (x)\tsen (y)\n";

for (int i = 0; i < t; i++)
{
    int sum = 0;
    
    for (int a = 0; a < t; a++)
    {
        sum += matriz[a][i];
    }

    sumcolumnas[i] = sum;
    double radianes = sum * M_PI / 180.0;
    double sen = sin(radianes);

    cout << sum << "\t" << sen << endl;
}

vector<double>vector1D;
double sumtotal = 0;

for (int i = 0; i < t; i++)
{
    for (int a = 0; a < t; a++)
    {
        vector1D.push_back(matriz[i][a]);
        sumtotal += matriz[i][a];
    }
}

double promedio = sumtotal / (t * t);
cout << "promedio de los numeros en la matriz: " << promedio << endl;

cout << "Vector dividido: " << endl;

for (int i = 0; i < vector1D.size(); i++)
{
    vector1D[i] /= promedio;
    cout << vector1D[i] << " ";
}

cout << endl;
return 0;   
}
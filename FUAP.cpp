#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> & arr)
{
    int m = arr.size();
    bool swapped;
    
    for (int l = 0; l < m - 1; l++ )
    {
       swapped = false;
       
       for (int t = 0; t < m - l - 1; t++)
       {
        if (arr[t] > arr[t + 1])
        {
            int temp = arr[t];
            arr[t] = arr[ t + 1];
            arr[t + 1] = temp;
            swapped = true;
        }
       }
       if (!swapped)
       {
        break;
       }
    }
}

int main()
{
    int cant;
    cout << "Ingrese la cantidad de numeros a ordenar: ";
    cin >> cant;

    vector<int> num(cant);
    cout << "Ingrese los numeros a ordenar: ";
    
    for (int i = 0; i < cant; i++)
    {
        cin >> num[i];
    }

    bubblesort(num);
    cout << "Numeros ordenados: ";
    for (int X : num) 
    {
        cout << X << " ";
    }
    return 0;
}
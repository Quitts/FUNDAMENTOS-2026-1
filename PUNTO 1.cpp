#include <iostream>
using namespace std;

int main() 
{
    int m;

    cout << "dame un numero entre 1 y 9: ";
    cin >> m;

    if (m < 1 || m > 9) 
    {
        cout << " las cagaste nada que ver contigo " << endl;
        return 0;
    }

    int num = 1; 

    for (int i = 1; i <= m; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << num << " ";
            num += 2; 
        }
        cout << endl;
    }

    return 0;
}
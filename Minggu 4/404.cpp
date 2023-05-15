#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int data[2][3] = {};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Matriks baris ke-" << i + 1 << " kolom ke-" << j + 1 << " = ";
            cin >> data[i][j];
        }
        cout << "\n";
    }

    cout << "Isi matriks : \n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << "\n";
    }
}

#include <iostream>
using namespace std;

int main()
{
    int col, row, i, j;
    int data[1000][1000] = {};

    cout << "Input jumlah baris = ";
    cin >> row;
    cout << "Input jumlah kolom = ";
    cin >> col;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Input nilai baris ke-" << i + 1 << " kolom ke-" << j + 1 << " = ";
            cin >> data[i][j];
        }
        cout << "\n";
    }

    cout << "Tampilan matrix : \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << "\n";
    }
}

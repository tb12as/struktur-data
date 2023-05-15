#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int data[3][3] = {
        {5, 0, 0},
        {9, 1, 0},
        {8, 6, 2},
    };

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << "\n";
    }
}

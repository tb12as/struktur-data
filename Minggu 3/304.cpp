#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int data[4][4] = {
        {2, 8, 0, 0},
        {3, 7, 6, 0},
        {0, 2, 7, 5},
        {0, 0, 7, 4},
    };

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << "\n";
    }
}

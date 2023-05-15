#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int data[2][5] = {{2, 7, 9, 5, 6}, {4, 1, 5, 2, 7}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << data[i][j]; 
            cout << " ";
        }
        cout << "\n";
    }
}

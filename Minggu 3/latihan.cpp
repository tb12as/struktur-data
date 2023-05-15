#include <stdio.h>
#include <conio.h>

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int data[2][5] = {{1, 3, 6, 9, 2}, {2, 4, 6, 8, 3}};

    clrscr();

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << data[i][j];
            cout << " ";
        }

        cout << "\n";
    }

    getch();
}

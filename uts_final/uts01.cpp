#include <iostream.h>

void singleMatrix(int (*matrix)[2], int current_row)
{
    for (int j = 0; j < 2; j++)
    {
        if (j == 0)
        {
            cout << "     " << matrix[current_row][j] << " ";
        }
        else
        {
            cout << " " << matrix[current_row][j] << " ";
        }
    }
}

void printMatrix(int (*matrix)[2], const char* name)
{
    int row;
    for (int i = 0; i < 3; i++)
    {
        if (i != 1)
        {
            row = i > 1 ? i - 1 : i;
            singleMatrix(matrix, row);
        }
        else
        {
            cout << name << " =";
        }

        cout << endl;
    }
    cout << endl;
}

int main()
{
    int row;
    int a[2][2] = {
        {1, 1},
        {1, 1},
    };

    int b[2][2] = {
        {2, 2},
        {2, 2},
    };

    printMatrix(a, "A");
    printMatrix(b, "B");

    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        if (i != 1)
        {
            row = i > 1 ? i - 1 : i;
            singleMatrix(a, row);
            singleMatrix(b, row);

            for (int j = 0; j < 2; j++)
            {
                if (j == 0)
                {
                    cout << "     " << a[row][j] + b[row][j] << " ";
                }
                else
                {
                    cout << " " << a[row][j] + b[row][j] << " ";
                }
            }
        }
        else
        {
            cout << "C =        +         = ";
        }

        cout << endl;
    }

    return 0;
}

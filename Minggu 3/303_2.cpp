#include <iostream>
using namespace std;

int main()
{
    int i, j, position;
    int data[6] = {5, 9, 1, 8, 6, 2};

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (i >= j)
            {
                position = (i * (i - 1) / 2) + j;
                cout << data[position - 1] << " ";
            }
            else
                cout << "0 ";
        }
        cout << "\n";
    }
}

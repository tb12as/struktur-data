#include <iostream>
using namespace std;

int x, y;

int pow(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * pow(x, y - 1);
}

int main()
{
    cout << "Menghitung x pangkat y (x ^ y)\n";
    cout << "x = 3\n";
    cout << "y = 3\n";
    cout << "3 ^ 3 = " << pow(3, 3) << "\n";
}

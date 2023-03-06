#include <iostream>
using namespace std;

int decrement(int n)
{
    if (n > 0)
    {
        cout << "Rekursi : " << n << "\n";
        return decrement(n - 1);
    }

    return 0;
}

int main()
{
    decrement(10);
}

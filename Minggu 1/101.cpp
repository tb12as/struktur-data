#include <iostream>
using namespace std;

void increment(int n, int limit)
{
    if (n <= limit)
    {
        cout << "Step after recursion : val -> " << n << "\n";
        return increment(n + 1, limit);
    }
}

void decrement(int n)
{
    if (n > 0)
    {
        cout << "Step in recursion : val -> " << n << "\n";
        return decrement(n - 1);
    }
    else
        increment(n, 2);
}

int main()
{
    decrement(3);
}

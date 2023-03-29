#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << "10 bilangan fibonacci pertama adalah : \n";

    for (int i = 1; i <= 10; i++)
    {
        cout << fib(i) << " ";
    }

    cout << "\n";
}

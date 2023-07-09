#include <iostream>
using namespace std;

int main()
{
    string x = "abcde";
    char *ptr = &x[0];
    int i = 0;

    while (i < x.length())
    {
        cout << *ptr << " ";
        if (i == (x.length() - 1))
        {
            cout << endl;
        }
        ptr++;
        i++;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {
        {1, 1},
        {1, 1},
    };

    int b[2][2] = {
        {2, 2},
        {2, 2},
    };

    cout << "    " << a[0][0] << " " << a[0][1] << endl;
    cout << "A = \n";
    cout << "    " << a[1][0] << " " << a[1][1] << endl;

    cout << endl;

    cout << "    " << b[0][0] << " " << b[0][1] << endl;
    cout << "B = \n";
    cout << "    " << b[1][0] << " " << b[1][1] << endl;
    cout << endl;

    cout << "    " << a[0][0] << " " << a[0][1] << "  " << b[0][0] << " " << b[0][1] << "    " << a[0][0] + b[0][0] << " " << a[0][1] + b[0][1] << endl;
    cout << "C =     +     =\n";
    cout << "    " << a[1][0] << " " << a[1][1] << "  " << b[1][0] << " " << b[1][1] << "    " << a[0][1] + b[1][0] << " " << a[1][1] + b[1][1] << endl;

}

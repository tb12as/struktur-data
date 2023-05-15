#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    clrscr();
    int x = 8, y;
    int *xPtr;
    xPtr = &x;
    y = *xPtr;
    cout << "Nilai x = " << x << endl;
    cout << "Alamat x = " << &x << endl;
    cout << "Alamat x = " << &xPtr << endl;
    cout << "Nilai yang disimpan pada alamat " << endl;
    cout << &xPtr << " adalah " << y << endl;
    getch();
}
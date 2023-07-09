#include <iostream>
#include <conio.h>
using namespace std;

/*
* Mengakses nilai variabel melalui pointer
*/
int main()
{
    int vint = 55;
    int *pint;
    clrscr();
    pint = &vint;
    cout << "Nilai yang dituntuk oleh pint = " << *pint;
    getch();
}
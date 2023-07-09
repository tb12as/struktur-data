#include <iostream>
#include <conio.h>
using namespace std;

/*
* Pendefinisian variabel pointer dan pengisian 
* alamat ke variabel tersebut dengan simbil "&"
*/
int main()
{
    int vint = 55;
    int *pint;
    clrscr();
    pint = &vint;
    cout << "Alamat variabel vint = " << pint << endl;
    getch();
}
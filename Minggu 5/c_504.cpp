#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    float *x1, *x2, y;
    clrscr();
    y = 3.14;
    x1 = &y;
    x2 = x1;
    printf("Nilai variabel y = %.2f\n ada di alamat %p\n", y, x1);
    printf("Nilai variabel y = %.2f\n ada di alamat %p\n", y, x2);
    getch();
    return 0;
}
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int *px;
    clrscr();

    x = 87;
    px = &x; // berisi dari alamat x
    y = *px; // berisi nilai yang ditunjuk px

    printf("Alamat x = %p\n", &x);
    printf("Isi px = %p\n", px);
    printf("Isi x = %i\n", x);
    printf("Nilai yang ditunjuk oleh px = %i\n", *px);
    printf("Nilai y = %i\n", y);

    getch();
    return 0;
}
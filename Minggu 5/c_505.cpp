#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int nilai[3], *penunjuk;

    clrscr();

    nilai[0] = 125;
    nilai[1] = 343;
    nilai[2] = 512;

    penunjuk = &nilai[0];
    printf("Nilai %i ada di alamat memori %p\n", *penunjuk, penunjuk);
    printf("Nilai %i ada di alamat memori %p\n", *(penunjuk + 1), penunjuk + 1);
    printf("Nilai %i ada di alamat memori %p\n", *(penunjuk + 2), penunjuk + 2);

    getch();
}
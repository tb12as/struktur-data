#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 2, *pa, *pb;
    clrscr();
    pa = &a;
    pb = &b;
    printf("Alamat memori yang ditunjuk oleh pa=%p\n", &a);
    printf("Alamat memori yang ditunjuk oleh pb=%p\n", &b);
    if (pa < pb)
        printf("pa menunjuk ke memori yang lebih rendah dari pb\n");

    if (pa == pb)
        printf("pa menunjuk ke memori yang sama dengan dari pb\n");

    if (pa > pb)
        printf("pa menunjuk ke memori yang lebih tinggi dari pb\n");

    getch();
}
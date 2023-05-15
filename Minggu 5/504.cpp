#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 20, *pa, *pb;

    pa = &a;
    pb = &b;

    printf("Nilai 1 = %i dan nilai 2 = %i\n", *pa, *pb);
}

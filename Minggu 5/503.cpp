#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int c[4] = {1, 2, 3, 4}, i;
    for (i = 0; i < 4; i++)
    {
        printf("Address of c[%i] = %p\n", i, &c[i]);
    }
}
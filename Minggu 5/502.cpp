#include <iostream>
using namespace std;

int main()
{
    int ip = 20, *var;
    var = &ip;
    printf("Alamat variabel var = %p\n", var);
    printf("Alamat pennyimpanan variabel ip = %p\n", &ip);
    printf("Nilai variabel ip = %i\n", *var);
}

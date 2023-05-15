#include <iostream>
using namespace std;

int main()
{
    int c = 22, *pc;

    pc = &c;

    printf("Alamat variabel c : %p\n", pc);
    printf("Nilai variabel c : %i\n\n", c);

    printf("Alamat dari pointer pc : %p\n", pc);
    printf("Nilai dari pointer pc : %i\n\n", *pc);

    c = 11;
    printf("Alamat dari pointer pc : %p\n", pc);
    printf("Nilai dari pointer pc : %i\n\n", *pc);

    c = 2;
    printf("Alamat dari variabel c : %p\n", &c);
    printf("Nilai variabel c : %i\n", c);
}
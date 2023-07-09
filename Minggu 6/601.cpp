#include <iostream>
using namespace std;

int main()
{
    int a, b, c, *pa, *pb, *pc;

    a = 125;
    pa = &a;

    b = 345;
    pb = &b;

    c = 720;
    pc = &c;

    cout << "Nilai " << a << " ada di alamat memori " << pa << endl;
    cout << "Nilai " << b << " ada di alamat memori " << pb << endl;
    cout << "Nilai " << c << " ada di alamat memori " << pc << endl;
}

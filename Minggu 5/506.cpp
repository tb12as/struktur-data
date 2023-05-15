#include <iostream>
using namespace std;

int main()
{
    int a, b, *pa, *pb;
    float c, *pc;
    string d, *pd;

    a = 7070;
    b = 5656;
    c = 3.5;
    d = "a";

    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;

    cout << "Nilai 1 = " << a << ", alamat = " << pa << endl;
    cout << "Nilai 2 = " << b << ", alamat = " << pb << endl;
    cout << "Nilai 3 = " << c << ", alamat = " << pc << endl;
    cout << "Nilai 4 = " << d << ", alamat = " << pd << endl;
}

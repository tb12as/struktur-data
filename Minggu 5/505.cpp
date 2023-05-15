#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, *pa, *pb, *pc, *pd, *pe;

    a = 7070;
    b = 5656;
    c = 9090;
    d = 8080;
    e = 6060;

    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;
    pe = &e;

    cout << *pa << endl;
    cout << *pb << endl;
    cout << *pc << endl;
    cout << *pd << endl;
    cout << *pe << endl;
}

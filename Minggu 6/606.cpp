#include <iostream>
using namespace std;

int main()
{
    int a = 25, b = 10, p = 0, q = -10, *pp, *pq;

    pp = &p;
    pq = &q;

    cout << "nilai a = " << a << endl;
    cout << "alamat p = " << pp << endl;
    cout << "alamat q = " << pq << endl;
    cout << "nilai a + b = " << a + b << endl;
    cout << "nilai p = " << p << " alamat = " << pp << endl;
    cout << "nilai q = " << q << " alamat = " << pq << endl;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    float c = 3.5;
    string d = "abcdefghij";

    cout << "nilai 1 = " << a << ", alamat 1 = " << &a << ", ukuran " << sizeof(a) << "\n";
    cout << "nilai 2 = " << b << ", alamat 2 = " << &b << ", ukuran " << sizeof(b) << "\n";
    cout << "nilai 3 = " << c << ", alamat 3 = " << &c << ", ukuran " << sizeof(c) << "\n";
    cout << "nilai 4 = " << d << ", alamat 4 = " << &d << ", ukuran " << sizeof(d) << "\n";
}

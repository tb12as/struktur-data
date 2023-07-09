#include <iostream>
using namespace std;

int main()
{
    string *ptr;
    string nama[7] = {"VWXYZ ABCDE", "WXYZ ABCDE", "XYZ ABCDE",
                      "YZ ABCDE", "Z ABCDE", " ABCDE", "ABCDE"};

    ptr = &nama[0];

    cout << "nama = " << nama[0] << endl;
    cout << "pNama = " << *ptr << endl;

    cout << "\nSetelah pNama += 6\n";
    ptr += 6;
    cout << "nama = " << nama[0] << endl;
    cout << "pNama = " << *ptr << endl;
}

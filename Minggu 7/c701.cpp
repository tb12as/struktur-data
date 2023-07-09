#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    struct dtmhs
    {
        char nim[9];
        char nama[15];
    };

    struct dtnil
    {
        float nil1;
        float nil2;
    };

    struct
    {
        struct dtmhs mhs;
        struct dtnil nil;
    } nilai;

    clrscr();

    cout << "Masukkan nim = ";
    cin >> nilai.mhs.nim;
    cout << "Masukkan nama = ";
    cin >> nilai.mhs.nama;
    cout << "Masukkan nilai uts = ";
    cin >> nilai.nil.nil1;
    cout << "Masukkan nilai uas = ";
    cin >> nilai.nil.nil2;

    cout << endl;

    cout << "NIM = " << nilai.mhs.nim << endl;
    cout << "nama = " << nilai.mhs.nama << endl;
    cout << "UTS = " << nilai.nil.nil1 << endl;
    cout << "UAS = " << nilai.nil.nil2 << endl;
}
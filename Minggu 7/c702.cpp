#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i;
    struct
    {
        char nim[5];
        char nama[5];
        float nilai;
    } mhs[5];

    clrscr();

    for (i = 0; i < 2; i++)
    {
        cout << "Masukkan NIM = ";
        cin >> mhs[i].nim;
        cout << "Masukkan nama = ";
        cin >> mhs[i].nama;
        cout << "Masukkan nilai akhir = ";
        cin >> mhs[i].nilai;
    }

    for (i = 0; i < 2; i++)
    {
        cout << "Data ke-" << i << endl;
        cout << "NIM = " << mhs[i].nim << endl;
        cout << "Nama = " << mhs[i].nama << endl;
        cout << "Nilai Akhir = " << mhs[i].nilai << endl;
        cout << endl;
    }

    getch();
}

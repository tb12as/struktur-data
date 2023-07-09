#include <iostream>
using namespace std;

int main()
{
    struct
    {
        string nama;
        string nim;
        float nilai;
    } mhs[2];

    mhs[0].nim = "1234";
    mhs[0].nama = "ABC";
    mhs[0].nilai = 30;
    mhs[1].nama = "XYZ";
    mhs[1].nim = "5678";
    mhs[1].nilai = 88;

    cout << "Nim         Nama         Nilai\n";
    cout << "==============================\n";
    for (int i = 0; i < 2; i++)
    {
        cout << mhs[i].nim << "        " << mhs[i].nama <<"          " << mhs[i].nilai << endl;
    }
}
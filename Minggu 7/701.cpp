#include <iostream>
using namespace std;

int main()
{
    struct
    {
        string nim;
        string nama;
        float ipk;
    } mhs;

    cout << "Masukkan data\n";
    cout << "Masukkan NIM = ";
    cin >> mhs.nim;

    cout << "Masukkan Nama = ";
    cin >> mhs.nama;

    cout << "Masukkan IPK = ";
    cin >> mhs.ipk;

    cout << "\n";

    cout << "Menampilkan data\n";
    cout << "NIM       = " << mhs.nim << endl;
    cout << "Nama      = " << mhs.nama << endl;
    cout << "IPK       = " << mhs.ipk << endl;
}

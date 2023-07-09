#include <iostream>
using namespace std;

struct mahasiswa
{
    char nim[20];
    char nama[30];
    float ipk;
};

int main()
{
    mahasiswa mhs;

    cout << "NIM      : ";
    cin.getline(mhs.nim, 20);
    cout << "Nama     : ";
    cin.getline(mhs.nama, 30);
    cout << "IPK      : ";
    cin >> mhs.ipk;

    cout << endl;

    cout << "NIM      :" << mhs.nim << endl;
    cout << "Nama     :" << mhs.nama << endl;
    cout << "IPK      :" << mhs.ipk << endl;
}
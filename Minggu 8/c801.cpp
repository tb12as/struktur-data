#include <iostream>
#include <conio.h>

using namespace std;

struct mahasiswa
{
    char nim[15];
    char nama[30];
    char alamat[50];
    float ipk;
};

int main(int argc, char const *argv[])
{
    clrscr();
    mahasiswa mhs;

    cout << "NIM     : ";
    cin.getline(mhs.nim, 15);
    cout << "Nama    : ";
    cin.getline(mhs.nama, 30);
    cout << "Alamat  : ";
    cin.getline(mhs.alamat, 50);
    cout << "IPK     : ";
    cin >> mhs.ipk;
    cout << endl;

    cout << "NIM Anda      : " << mhs.nim << endl;
    cout << "Nama Anda     : " << mhs.nama << endl;
    cout << "Alamat Anda   : " << mhs.alamat << endl;
    cout << "IPK Anda      : " << mhs.ipk << endl;
}

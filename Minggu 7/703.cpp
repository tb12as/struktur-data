#include <iostream>
using namespace std;

int main()
{
    struct
    {
        char nim[30];
        char nama[30];
        char alamat[30];
        float ipk;
    } mhs[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Memasukkan data index ke-" << i << endl;
        cout << "Masukkan NIM = ";
        cin.getline(mhs[i].nim, 30);
        cout << "Masukkan Nama = ";
        cin.getline(mhs[i].nama, 30);
        cout << "Masukkan Alamat = ";
        cin.getline(mhs[i].alamat, 30);
        cout << "Masukkan IPK = ";
        cin >> mhs[i].ipk;
        cin.ignore();
        cout << endl;
    }

    cout << endl
         << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Menampilkan data index ke-" << i << endl;
        cout << "NIM = " << mhs[i].nim << endl;
        cout << "Nama = " << mhs[i].nama << endl;
        cout << "Alamat = " << mhs[i].alamat << endl;
        cout << "IPK = " << mhs[i].ipk << endl;
        cout << endl;
    }
}
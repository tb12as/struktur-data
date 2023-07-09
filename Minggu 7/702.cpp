#include <iostream>
using namespace std;

int main()
{
    struct tanggal
    {
        char date[30];
        char month[30];
        char year[30];
    };

    struct almt
    {
        char jalan[30];
        char kota[30];
        char kode_pos[30];
    };

    struct
    {
        char nim[30];
        char nama[30];
        float ipk;
        struct tanggal tgl_lahir;
        struct almt alamat;
    } mhs;

    cout << "Masukkan data mahasiswa\n";
    cout << "Masukkan NIM = ";
    cin.getline(mhs.nim, 30);
    cout << "Masukkan Nama = ";
    cin.getline(mhs.nama, 30);
    cout << "Masukkan IPK = ";
    cin >> mhs.ipk;
    cin.ignore();

    cout << "Tanggal Lahir\n";
    cout << "Tanggal = ";
    cin.getline(mhs.tgl_lahir.date, 30);
    cout << "Bulan = ";
    cin.getline(mhs.tgl_lahir.month, 30);
    cout << "Tahun = ";
    cin.getline(mhs.tgl_lahir.year, 30);

    cout << "Alamat \n";
    cout << "Jalan = ";
    cin.getline(mhs.alamat.jalan, 30);
    cout << "Kota = ";
    cin.getline(mhs.alamat.kota, 30);
    cout << "Kode pos = ";
    cin.getline(mhs.alamat.kode_pos, 30);

    cout << "\n";

    cout << "Menampilkan data\n";
    cout << "NIM           = " << mhs.nim << endl;
    cout << "Nama          = " << mhs.nama << endl;
    cout << "IPK           = " << mhs.ipk << endl;
    cout << "Tanggal Lahir = " << mhs.tgl_lahir.date << '-' << mhs.tgl_lahir.month << '-' << mhs.tgl_lahir.year << endl;
    cout << "Jalan         = " << mhs.alamat.jalan << endl;
    cout << "Kota          = " << mhs.alamat.kota << endl;
    cout << "Kode pos      = " << mhs.alamat.kode_pos << endl;
}

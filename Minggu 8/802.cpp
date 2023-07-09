#include <iostream>

using namespace std;

struct tanggal
{
    char date[5];
    char month[5];
    char year[10];
};

struct waktu
{
    char hour[5];
    char minute[5];
    char second[5];
};

struct user
{
    char id[10];
    tanggal date;
    waktu time;
};

int main()
{
    user usr;
    cout << "ID         : ";
    cin >> usr.id;

    cout << "Tanggal Login\n";
    cout << "Tanggal    : ";
    cin >> usr.date.date;
    cout << "Bulan      : ";
    cin >> usr.date.month;
    cout << "Tahun      : ";
    cin >> usr.date.year;

    cout << "Waktu Login\n";
    cout << "Jam        : ";
    cin >> usr.time.hour;
    cout << "Menit      : ";
    cin >> usr.time.minute;
    cout << "Detik      : ";
    cin >> usr.time.second;

    cout << "\nTerima Kasih\n\nData Anda : \n";
    cout << "ID         : " << usr.id << endl;
    cout << "Date       : " << usr.date.date << "-" << usr.date.month << "-" << usr.date.year << endl;
    cout << "Time       : " << usr.time.hour << ":" << usr.time.minute << ":" << usr.time.second << endl;
}
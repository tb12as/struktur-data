#include <iostream>
using namespace std;

int main()
{
    int i;
    string months[12] = {"Januari", "Februari", "Maret", "April", "Mei",
                         "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    cout << "Masukkan bulan 1..12 : ";
    cin >> i;
    if (i - 1 <= 12)
    {
        cout << "Bulan ke-" << i << " adalah " << months[i - 1] << endl;
    }
}
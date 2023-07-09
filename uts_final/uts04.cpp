#include <iostream.h>

int main()
{
    int i;
    char months[12][20] = {"Januari", "Februari", "Maret", "April", "Mei",
                           "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    cout << "Masukkan bulan 1..12 : ";
    cin >> i;

    if (i >= 1 && i <= 12)
    {
        cout << "Bulan ke-" << i << " adalah " << months[i - 1];
    }

    return 0;
}

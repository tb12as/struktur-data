#include <iostream.h>

int main()
{
    int nilai[4];
    int find, found = 0;
    int i;

    cout << "Masukkan 4 nilai\n";
    for (i = 0; i < 4; i++)
    {
        cout << "Nilai index ke-" << i << " = ";
        cin >> nilai[i];
    }

    cout << endl;
    cout << "Nilai yang anda masukkan adalah \n";
    for (i = 0; i < 4; i++)
    {
        cout << "nilai[" << i << "] = " << nilai[i] << endl;
    }

    cout << "Bilangan yang ingin dicari : ";
    cin >> find;
    for (i = 0; i < 4; i++)
    {
        if (nilai[i] == find)
        {
            found += 1;
            cout << "Elemen ditemukan di elemen : " << i << endl;
        }
    }
    cout << "Jumlah data : " << found << endl;

    return 0;
}

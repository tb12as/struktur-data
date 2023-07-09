#include <iostream.h>

int main()
{
    int x, i;
    int nilai[100];
    
    cout << "Masukkan banyaknya mahasiswa : ";
    cin >> x;
    
    for (i = 0; i < x; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    cout << "Nilai mahasiswa yang telah diinput : \n";
    for (i = 0; i < x; i++)
    {
        cout << nilai[i] << " ";
    }
    cout << endl;

    return 0;
}

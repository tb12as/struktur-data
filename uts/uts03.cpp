#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Masukkan banyaknya mahasiswa : ";
    cin >> x;

    int nilai[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    cout << "Nilai mahasiswa yang telah diinput : \n";
    for (int i = 0; i < x; i++)
    {
        cout << nilai[i] << " ";
    }
    cout << endl;
}
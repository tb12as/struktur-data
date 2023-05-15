#include <iostream>
using namespace std;

int main()
{
    int data[6];
    int i;

    cout << "Input nilai 6 mahasiswa\n";
    for (i = 1; i <= 6; i++)
    {
        cout << "Mahasiswa ke-" << i << " : ";
        cin >> data[i - 1];
    }

    cout << "Nilai mahasiswa yang telah di-input\n";
    for (i = 0; i < 6; i++)
    {
        cout << data[i] << " ";
    }

    cout << "\n";
}
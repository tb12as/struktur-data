#include <iostream>
using namespace std;

int main()
{
    int i;
    int total = 0;
    float average;
    int grades[5] = {};

    for (i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai test ke-" << i + 1 << " = ";
        cin >> grades[i];
        total += grades[i];
    }

    cout << "JUmlah : " << total << "\n";
    cout << "Rata rata : " << total / 5 << "\n";
}

#include <iostream>
using namespace std;

int main() {
    string nama[2];
    float uts[2];
    float uas[2];

    for (int i = 0; i < 2; i++) {
        cout << "Data ke-" << i+1 << "\n";
        cout << "Nama      : ";
        cin >> nama[i];

        cout << "Nulai UTS : ";
        cin >> uts[i];

        cout << "Nulai UAS : ";
        cin >> uas[i];
    }

    cout << "------------------------------------------------------------\n";
    cout << "No.   Nama                Nilai          Nilai        Nilai\n";
    cout << "                          UTS            UAS          Hasil\n";
    cout << "------------------------------------------------------------\n";
    for (int i = 0; i < 2; i++) {
        float hasil = (uts[i] * 0.4) + (uas[i] * 0.6);
        string name = nama[i].append(19 - nama[i].length(), ' ');

        cout << i+1 << ".    " << name << " " << uts[i] << "             " << uas[i] << "           " << hasil << "\n";
    }
    cout << "------------------------------------------------------------\n";
}

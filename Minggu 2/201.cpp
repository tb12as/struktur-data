#include <iostream>
using namespace std;

int main() {
    int count = 4;
    int nilai[count] = {};
    cout << "Masukkan " << count << " data : \n";

    for (int i = 0; i < count; i++) {
        cout << "Nilai index ke-" << i << " = ";
        cin >> nilai[i];
    }

    cout << "\nNilai yang anda masukkan adalah :\n";
    for (int i = 0; i < count; i++) {
        cout << "nilai[" << i <<"] = " << nilai[i] << "\n";
    }
}

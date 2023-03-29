#include <iostream>
using namespace std;

int main() {
    int min = 0;
    int max = 0;
    
    int count = 4;
    int nilai[count] = {};
    cout << "Masukkan " << count << " data : \n";

    for (int i = 0; i < count; i++) {
        cout << "Nilai index ke-" << i << " = ";
        cin >> nilai[i];
        if (nilai[i] > max) {
            max = nilai[i];
        }

        if (i == 0 || nilai[i] < min) {
            min = nilai[i];
        }
    }

    cout << "\n";
    cout << "Nilai maksimum : " << max << "\n";
    cout << "Nilai minimum : " << min << "\n";
}

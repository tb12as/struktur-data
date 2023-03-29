#include <iostream>
using namespace std;

void multiplyEach(int arr[], int by, int length) {
    for (int i = 0; i < length; i ++) {
        cout << "   " << arr[i] * by;
    }
    cout << "\n";
}


int main() {
    int count;
    cout << "Program array sebagai argumen dalam fungsi\n";
    cout << "Masukkan jumlah elemen : ";
    cin >> count;

    int array[count] = {};
    for (int i = 0; i < count; i++) {
        cout << "Masukkan array[" << i + 1 << "] : ";
        cin >> array[i];
    }

    multiplyEach(array, 2, count);
}

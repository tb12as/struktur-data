#include<iostream>
using namespace std;

int main() {
    string nama;
    int nilai;

    cout << "Masukkan nama : ";
    cin >> nama;

    cout << "Masukkan nilai : ";
    cin >> nilai;

    cout << "nilai 1 = " << nama << ", alamat 1" << &nama << endl;
    cout << "nilai 2 = " << nilai << ", alamat 2" << &nilai << endl;
}
#include <iostream>
using namespace std;

struct lingkaran
{
    float jariJari;
    float luas;
    float keliling;
};

int main()
{
    lingkaran x;
    x.jariJari = 3;
    x.luas = (float)3.14 * x.jariJari * x.jariJari;
    x.keliling = (float)2 * 3.14 * x.jariJari;

    cout << "Jari - jari Lingkaran = " << x.jariJari << endl;
    cout << "Luas Lingkaran = " << x.luas << endl;
    cout << "Keliling Lingkaran = " << x.keliling << endl;
}

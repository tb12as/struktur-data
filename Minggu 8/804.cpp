#include <iostream>
using namespace std;

struct ppanjang
{
    float panjang;
    float lebar;
    float luas;
    float keliling;
};

int main()
{
    ppanjang x;
    x.panjang = 10;
    x.lebar = 7;
    x.luas = (float)x.panjang * x.lebar;
    x.keliling = (float)2 * (x.panjang + x.lebar);

    cout << "Panjang = " << x.panjang << endl;
    cout << "Lebar = " << x.lebar << endl;
    cout << "Keliling = " << x.keliling << endl;
    cout << "Luas = " << x.luas << endl;
}

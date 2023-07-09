#include <iostream>
using namespace std;

int transform(int n)
{
    return n * 10;
}

int main()
{
    struct
    {
        int x;
        int y;
    } data[2];

    for (int i = 0; i < 2; i++)
    {
        data[i].x = 30;
        data[i].y = 10;

        cout << "Isi semula : x = " << data[i].x << " y = " << data[i].y << endl;
        cout << "Isi sekarang : x = " << transform(data[i].x) << " y = " << transform(data[i].y) << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int i;
    float suhu[5] = {27.5, 28, 29, 30.5, 27};

    for (i = 0; i < 5; i++)
    {
        cout << "Suhu [" << i << "] = " << suhu[i] << "\n";
    }
}

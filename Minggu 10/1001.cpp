#include <iostream>

using namespace std;

#define MAX 8
typedef struct
{
    int data[MAX];
    int head;
    int tail;
} Queue;

Queue antrian;

void create()
{
    // this function does something simillar to clear();
    antrian.head = antrian.tail = -1;
}

bool isEmpty()
{
    return antrian.tail == -1;
}

bool isFull()
{
    return antrian.tail == MAX - 1;
}

void enqueue(int data)
{
    if (isEmpty())
    {
        antrian.head = 0;
    }

    if (!isFull())
    {
        antrian.tail++;
        antrian.data[antrian.tail] = data;

        // cout << data << " masuk di index: " << antrian.tail << "\n";
    }
}

int dequeue()
{
    int i;
    int removed = antrian.data[antrian.head];
    for (i = antrian.head; i <= antrian.tail - 1; i++)
    {
        // cout << i << " ini loop dequeue\n";
        antrian.data[i] = antrian.data[i + 1];
    }

    antrian.tail--;

    return removed;
}

void clear()
{
    // this clear dosen't remove the element
    // it only set the head and tail to -1,
    // so there is no loop when showing the data
    create();
}

void showData()
{
    if (!isEmpty())
    {
        int j;
        for (j = antrian.head; j <= antrian.tail; j++)
        {
            cout << "data : " << antrian.data[j] << "\n";
        }
    }
}

int main()
{
    create();

    int k, _continue, _temp;

    for (k = 0; k < MAX; k++)
    {
        cout << "Masukkan nilai elemen : ";
        cin >> _temp;
        enqueue(_temp);

        cout << endl;
        cout << "Tekan 1 untuk melanjutkan : ";
        cin >> _continue;
        if (_continue != 1)
        {
            break;
        }
    }

    int x = antrian.tail;
    for (k = antrian.head; k <= x; k++)
    {
        cout << "Tekan 1 untuk menghapus elemen : ";
        cin >> _continue;
        if (_continue != 1)
        {
            break;
        }
        _temp = dequeue();
        cout << "Nilai telah dihapus : " << _temp << endl;
        cout << endl;
    }
}
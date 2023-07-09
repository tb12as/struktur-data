#include <iostream>
#include <conio.h>

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

        cout << data << " masuk di index: " << antrian.tail << "\n";
    }
}

void dequeue()
{
    if (!isEmpty())
    {
        int i;
        for (i = antrian.head; i <= antrian.tail - 1; i++)
        {
            // cout << i << " ini loop dequeue\n";
            antrian.data[i] = antrian.data[i + 1];
        }
        antrian.tail--;
    }
    else
    {
        cout << "Antrian kosong, gagal melakukan dequeue" << endl;
    }
}

void clear()
{
    // this clear dosen't remove the element
    // it only set the head and tail to -1,
    // so there is no loop when showing the data
    create();
    cout << "Semua data terhapus" << endl;
}

void showData()
{
    if (!isEmpty())
    {
        int j;
        for (j = antrian.head; j <= antrian.tail; j++)
        {
            cout << "Data ke-" << j + 1 << " : " << antrian.data[j] << "\n";
        }
    }
    else
    {
        cout << "Antrian kosong" << endl;
    }
}

int main()
{
    create();
    int option;
    do
    {
        cout << "1. Input\n";
        cout << "2. Delete\n";
        cout << "3. Print\n";
        cout << "4. Clear\n";
        cout << "5. Exit\n";

        cout << "Masukkan pilihan : ";
        cin >> option;

        if (option == 1)
        {
            clrscr();
            create();

            int i;
            int __temp;
            for (i = 0; i < MAX; i++)
            {
                cout << "Masukkan data ke-" << (i + 1) << " : ";
                cin >> __temp;
                enqueue(__temp);
            }
        }

        if (option == 2)
        {
            clrscr();
            dequeue();
        }

        if (option == 3)
        {
            clrscr();
            showData();
        }

        if (option == 4)
        {
            clrscr();
            clear();
        }

        if (option == 5)
        {
            break;
        }
    } while (true);
}
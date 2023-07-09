#include <iostream.h>

#define MAX 5

typedef struct
{
    int top;
    int data[MAX];
} Stack;

Stack s;

void init()
{
    s.top = -1;
}

int isEmpty()
{
    return s.top == -1;
}

int isFull()
{
    return s.top == MAX - 1;
}

void push(int e, int debug = 0)
{
    if (!isFull())
    {
        s.top += 1;
        s.data[s.top] = e;
        if (debug > 1)
        {
            cout << "New item : " << s.top << " " << e << endl;
        }
    }
    else if (debug > 0)
    {
        cout << "Stack sudah penuh, tidak dapat menambahkan data \n";
    }
}

void pop()
{
    if (!isEmpty())
    {
        int cache = s.top;
        int removed = s.data[cache];
        s.top -= 1;

        cout << "Nilai yang di pop : " << removed << endl;
    }
    else
    {
        cout << "Stack kosong, pop tidak dapat dilakukan!\n";
    }
}

void printData()
{
    if (!isEmpty())
    {
        cout << "\nAngka-angka yang ada dalam stack adalah : " << endl;
        for (int i = 0; i <= s.top; i++)
        {
            cout << s.data[i] << "\n";
        }
        cout << "\n";
    }
    else
    {
        cout << "\nStack masih kosong" << endl;
    }
}

int main()
{
    init();

    int number;
    int option;
    option = 1;
    while (option < 3)
    {
        if (option == 1)
        {
            cout << "Masukkan nilai yang akan di push : ";
            cin >> number;
            push(number, 1);

            cout << "Tekan 1 untuk melanjutkan push, tekan 2 untuk pop : ";
        }
        else
        {
            cout << "Tekan 2 untuk pop sebuah elemen, 1 untuk push : ";
        }

        cin >> option;
        if (option == 2)
        {
            pop();
        }

        if (option > 2 || option < 1)
        {
            break;
        }
    }

    return 0;
}

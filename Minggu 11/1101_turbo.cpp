#include <iostream.h>
#include <conio.h>

#define MAX 5

struct Stack
{
    int top;
    int data[MAX];
};

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

        cout << "Popped element : " << removed << endl;
    }
    else
    {
        cout << "Stack sudah kosong\n";
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
    clrscr();
    init();

    char temp[1];
    char option = 'A';
    do
    {
        cout << "\nPilih salah satu menu : " << endl;
        cout << "  - Press 'P' to input data " << endl;
        cout << "  - Press 'O' to rettrive data " << endl;
        cout << "  - Press 'S' to show data " << endl;
        cout << "  - Press 'E' to exit " << endl;
        cin >> option;

        if (option == 'E')
        {
            break;
        }

        if (option == 'O')
        {
            pop();
        }

        if (option == 'S')
        {
            printData();
        }

        if (option == 'P')
        {
            int x;
            cout << "Data yang akan ditambahkan pada stack : ";
            cin >> x;

            push(x, 1);
        }

        cout << "Press any key to return to Menu : ";
        cin >> temp;
    } while (option != 'E');

    return 0;
}

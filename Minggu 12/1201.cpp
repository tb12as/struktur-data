#include <iostream>
using namespace std;

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

        cout << "Popped element : " << removed << endl;
    }
    else
    {
        cout << "Empty stack\n";
    }
}

void printData()
{
    if (!isEmpty())
    {
        cout << "\nStack elements : " << endl;
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

    int option;
    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice : " << endl;
        cin >> option;

        if (option >= 4)
        {
            break;
        }

        if (option == 2)
        {
            pop();
        }

        if (option == 3)
        {
            printData();
        }

        if (option == 1)
        {
            int x;
            cout << "Data yang akan ditambahkan pada stack : ";
            cin >> x;

            push(x, 1);
        }
    } while (true);

    return 0;
}

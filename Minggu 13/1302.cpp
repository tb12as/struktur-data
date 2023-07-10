#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printData()
{
    struct node *ptr = head;
    cout << "\n";
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}

void insert(int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->data = data;
    link->next = head;

    head = link;
}

void append(int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    struct node *last = head;
    link->data = data;
    link->next = NULL;
    if (head == NULL)
    {
        head = link;
    }
    else
    {
        while (last->next != NULL)
            last = last->next;

        last->next = link;
    }
}

int main()
{
    cout << "Masukkan 5 bilangan genap : ";
    int i = 1;
    int _iAmPsy0p4thL0l;
    while (i <= 5)
    {
        cout << endl;
        cout << i << " : ";
        cin >> _iAmPsy0p4thL0l;

        if (_iAmPsy0p4thL0l % 2 == 0)
        {
            append(_iAmPsy0p4thL0l);
            i++;
        }
        else
        {
            cout << "Bilangan genap anjir :(\n";
        }
    }

    cout << "5 Bilangan genap yang dimasukkan : ";
    printData();

    return 0;
}

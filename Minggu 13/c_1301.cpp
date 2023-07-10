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
    cout << "\n[head] => ";
    while (ptr != NULL)
    {
        cout << ptr->data << " => ";
        ptr = ptr->next;
    }
    cout << "[null]\n";
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
    insert(40);
    insert(50);
    insert(60);
    insert(5);
    insert(80);
    insert(70);

    printData();
    return 0;
}

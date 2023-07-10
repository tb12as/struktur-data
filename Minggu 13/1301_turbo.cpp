#include <iostream.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printData(int remove = 0)
{
    struct node *ptr = head;
    cout << "\n[head] => ";
    while (ptr != NULL)
    {
        if (!(ptr->data == remove))
        {
            cout << ptr->data << " => ";
        }
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

int main()
{
    insert(80);
    insert(70);
    insert(5);
    insert(60);
    insert(50);
    insert(40);

    cout << "Before removal :";
    printData(0);

    cout << "After removal :";
    printData(60);

    return 0;
}

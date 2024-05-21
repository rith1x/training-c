#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void appendChild(int data, struct Node **q)
{
    struct Node *nn = (struct Node *)malloc(sizeof(struct Node));
    if (*q == NULL)
    {
        *q = nn;
    }
    else
    {
        struct Node *t = *q;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = nn;
           }
}

void display(struct Node *q)
{
    while (q->next != NULL)
    {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("%d ", q->data);
}

int main()
{

    struct Node *head;
    head = NULL;
    for (int i = 0; i < 10; i++)
    {
        int n;
        scanf("%d", &n);
        appendChild(n, &head);
    }
    display(head);
}
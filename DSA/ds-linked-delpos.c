#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *link;
};
void append(struct node **, int);
void display(struct node *);
void delafter(struct node *, int);

int main()
{
    struct node *p;
    p = NULL;
    int n, l;
    char ch[10];
    do
    {
        printf("Enter the value\n");
        scanf("%d", &n);
        append(&p, n);
        printf("Do you want to add another node? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The elements in the linked list are");
    display(p);
    printf("\n");
    do
    {
        printf("Enter the position after which you want to delete another node\n");
        scanf("%d", &l);
        delafter(p, l);
        printf("The elements in the linked list are");
        display(p);
        printf("\n");
        printf("Do you want to delete another node after a certain position? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    return 0;
}

void append(struct node **q, int num)
{
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    printf("Creating new node...\n");
    nn->data = num;
    nn->link = NULL;
    printf("Assigning Value...\n");
    if (*q == NULL)
    {
        printf("Head is null\n");
        *q = nn;
    }
    else
    {
        printf("Temp creation\n");
        struct node *temp = *q;
        while (temp->link != NULL)
        {
            printf("Traversing ");
            temp = temp->link;
        }
        temp->link = nn;
    }
}

void display(struct node *q)
{
    while (q->link != NULL)
    {
        printf(" %d", q->data);
        q = q->link;
    }
    printf(" %d", q->data);
}

void delafter(struct node *q, int loc)
{
    for (int i = 0; i < loc; i++)
    {
        if (q->link == NULL || q == NULL)
        {
            printf("Invalid position");
            return;
        }
        q = q->link;
    }
    struct node *prev = q->link;
    q = q->link;
    struct node *next = q->link;
    prev->link = next->link;
}
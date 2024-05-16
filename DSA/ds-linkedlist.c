#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    int data;
    struct Node *next;
};
void appendNode(int a, struct Node **p)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node)); // NEW NODE SIZE ALLOCATION
    newNode->data = a;                                                 // NEW NODE DATA
    newNode->next = NULL;                                              // ASSIGNING NEXT AS NULL
    if (*p == NULL)
    {
        *p = newNode; // IF NULL, THIS IS THE FIRST CHILD
    }
    else
    {
        struct Node *temp = *p;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void display(struct Node **head)
{
    if (*head == NULL)
    {
        printf("The list is empty!");
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
int main()
{
    struct Node *head;
    head = NULL;
    int n;
    char ch[10];
    do
    {
        printf("Enter the value: ");
        scanf("%d", &n);
        appendNode(n, &head);
        printf("Do you want to add another node? y/n ");
        scanf("%s", ch);
    } while (!strcmp(ch, "y"));
    display(&head);
}
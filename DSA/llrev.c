#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int id;
    char name[10];
    char gender[10];
    struct student *link;
};
void append(struct student **, struct student);
void display(struct student *);
void reverse(struct student **);

int main()
{
    struct student *p;
    p = NULL;
    struct student s;
    char ch[10];
    do
    {
        printf("Enter the id\n");
        scanf("%d", &s.id);
        printf("Enter the name\n");
        scanf("%s", s.name);
        printf("Enter the gender\n");
        scanf("%s", s.gender);
        append(&p, s);
        printf("Do you want to add details of another student? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The details of the students are\n");
    printf("%4s %10s %6s\n", "ID", "Name", "Gender");
    display(p);
    printf("The details of the students after reversing are\n");
    printf("%4s %10s %6s\n", "ID", "Name", "Gender");
    reverse(&p);
    display(p);
    return 0;
}

void append(struct student **q, struct student s)
{
    struct student *nn = (struct student *)malloc(sizeof(struct student));
    nn->link = NULL;
    strcpy(nn->name, s.name);
    strcpy(nn->gender, s.gender);
    nn->id = s.id;
    if (*q == NULL)
    {
        *q = nn;
    }
    else
    {
        struct student *t = *q;
        while (t->link != NULL)
        {
            t = t->link;
        }
        t->link = nn;
    }
}

void display(struct student *q)
{
    struct student *temp = q;
    while (temp->link != NULL)
    {
        printf("%4d ", temp->id);
        printf("%10s ", temp->name);
        printf("%6s ", temp->gender);
        printf("\n");
        temp = temp->link;
    }
    printf("%4d ", temp->id);
    printf("%10s ", temp->name);
    printf("%6s ", temp->gender);
    printf("\n");
}

void reverse(struct student **x)
{
    struct student *temp = *x;
    struct student *next = NULL;
    struct student *next1;
    while (temp->link != NULL)
    {
        next1 = temp->link;
        temp->link = next;
        next = temp;
        temp = next1;
    }
    *x = next;
}

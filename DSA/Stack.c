#include <stdio.h>

// STATIC ARRAY - STACK

struct Stack
{
    int top;
    int a[5];
};

void init(struct Stack *p)
{
    p->top = -1;
}
void push(struct Stack *p, int num)
{
    if (p->top == 4)
    {
        printf("Stack is Full");
    }
    else
    {
        (p->top)++;
        p->a[p->top] = num;
        printf("Pushed the value in stack");
    }
}
int pop(struct Stack *p)
{
    int d = p->a[p->top];
    (p->top)--;
    return d;
}
void displayAsc(struct Stack p)
{
    for (int i = 0; i <= p.top; i++)
    {
        printf("%d ", p.a[i]);
    }
}
void displayDsc(struct Stack p)
{
    for (int i = p.top; i >= 0; i--)
    {
        printf("%d ", p.a[i]);
    }
}
void peek(struct Stack p)
{
    printf("%d", p.a[p.top]);
}
int main()
{
    struct Stack p;
    init(&p);

    printf("Welcome to Stack!\n\n");
    int o;
    int n;
loop:
    printf("\n1.Push a int\n2.Pop a value\n3.Display in bottom-up\n4.Display in top-down\n5.Peek top element\n\nEnter your option: ");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
        printf("Enter value to push: ");
        scanf("%d", &n);
        push(&p, n);
        break;
    case 2:
        printf("%d is popped out of stack", pop(&p));
        break;
    case 3:
        displayAsc(p);
        break;
    case 4:
        displayDsc(p);
        break;
    case 5:
        peek(p);
        break;
    default:
        goto loop;
    }
    goto loop;
}
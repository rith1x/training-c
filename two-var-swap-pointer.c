// Online C compiler to run C program online
#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a = 5;
    int b = 6;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}

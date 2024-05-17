#include <stdio.h>
#include <string.h>

int main()
{

    char a[10];
    char b[10];
    scanf("\n%[^\n]s", a);
    scanf("\n%[^\n]s", b);
    if (strcmp(a, b) == 0)
    {
        printf("Both are Equal");
    }
    else if (strcmp(a, b) > 0)
    {
        printf("a");
    }
    else
    {
        printf("b");
    }
}
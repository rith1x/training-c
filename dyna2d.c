#include <stdio.h>
#include <stdlib.h>

int main()
{

    int r, c;
    scanf("%d %d", &r, &c);

    int **a = (int **)malloc(r * sizeof(int *));

    for (int i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    printf("%p\n", a);
    for (int i = 0; i < r; i++)
    {
        int inc = 0;
        for(int j = 0; j<c;j++){
            printf("%p ",a[i]+inc);
            inc+=4;
        }
        printf("\n");

    }
}

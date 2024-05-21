#include <stdio.h>

int main()
{
    int n = 5;
    int *a = (int *)malloc(n * sizeof(int));

    int r = 3, c = 3;


    int** z = (int **) malloc(r * sizeof(int *));
    for (int i = 0; i < c; i++)
    {
        *(z+i) = (int *)malloc(c * sizeof(int));
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",*(*(z+i)+j));
        }
    }
}
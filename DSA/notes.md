# Data Structures & Algorithms


## Sorting

### Selection Sort

```c
#include <stdio.h>

int main()
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values separated by space: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // SELECTION SORT

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    // RESULT ARRAY
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++, printf(" "))
    {
        printf("%d", arr[i]);
    }
}
```

#### Working
```
5 6 1 0 2

i,j - k
0 1 - 5 6 1 0 2
0 2 - 1 6 5 0 2 -s
0 3 - 0 6 5 1 2 -s
0 4 - 0 6 5 1 2 

        k
stt - 0 6 5 1 2
1 2 - 0 5 6 1 2 -s
1 3 - 0 1 6 5 2 -s
1 4 - 0 1 6 5 2

          k
stt - 0 1 6 5 2
2 3 - 0 1 5 6 2 -s
2 4 - 0 1 2 6 5 -s

            k
stt - 0 1 2 6 5
3 4 - 0 1 2 5 6 -s SORTED


```
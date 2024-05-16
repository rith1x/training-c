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
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n = 355;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
        if (sum > 9 && n % 10 == 0)
        {
            n = sum;
            sum = 0;
        }
    }
    printf("%d", sum);

    return 0;
}
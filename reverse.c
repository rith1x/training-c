#include <stdio.h>
int reverse(int x)
{
    if (x >= INT_MIN && x <= INT_MAX)
    {
        return 0;
    }
    int sign = 0;
    if (x < 0)
    {
        ~x + 1;
        sign = 1;
    }
    int cpy = x;
    int rev = 0;
    while (cpy != 0)
    {
        rev *= 10;
        int tem = cpy % 10;
        cpy /= 10;
        rev += tem;
    }
    if (sign)
    {
        ~rev;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d", &n);
    int r = reverse(n);
    printf("%d", r);
}
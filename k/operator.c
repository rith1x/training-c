#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    printf("%d\n", a + b); // 15
    printf("%d\n", a - b); // 5
    printf("%d\n", a / b); // 2
    printf("%d\n", a * b); // 50
    printf("%d\n", a % b); // 0
    printf("%d\n", ++a);   // 11
    printf("%d\n", a++);   // 11 (a = 12)
    printf("%d\n", --b);   // 4
    printf("%d\n", b--);   // 4 ( b = 3)
    printf("%d\n", a & b); // 0
                           // a = 12 b = 3
                           //
                           // a -> 1 1 0 0
                           // b -> 0 0 1 1
                           // 0 => 0 0 0 0
    printf("%d\n", a | b);
    // 15
    // a = 12 b = 3
    //
    // a -> 1 1 0 0
    // b -> 0 0 1 1
    // 15=> 1 1 1 1

    printf("%d\n", ~a);

    // -13
    // a = 12
    // a -> 1 1 0 0
    // com -      1
    // 1 1 0 1
    // a = (signchange + +1) = -13

    printf("%d\n", a >> 2); // a>>=2
    // a = 12 -> 1 1 0 0
    // >>2    -> > > 1 1
    // a = 3  ->     3
    printf("%d\n", a << 1); // for updating a<<=1
    // a = 12 ->   1 1 0 0
    // <<1    -> 1 1 0 0 <
    // a = 24 -> 16 + 8

    printf("%d", a ^ b);
    // a = 12, b = 3  // | 0 | 0 | 0 |
    // a => 1 1 0 0   // | 0 | 1 | 1 | true if both are different
    // b => 0 0 1 1   // | 1 | 0 | 1 | "
    // s => 1 1 1 1   // | 1 | 1 | 0 |

    // TERNARY
    // condition ? if : else+.

    int max = a > b ? a : b;
}
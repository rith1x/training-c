// %c: Prints a single character.
// %d: Prints a decimal integer.
// %f: Prints a floating-point number.
// %e: Prints a floating-point number in exponential notation.
// %s: Prints a string.
// %u: Prints an unsigned integer.
// %o: Prints an octal integer.
// %x: Prints a hexadecimal integer.
// %%: Prints a percent sign.
#include <stdio.h>

int main()
{
    // char a[50];
    // scanf("%s", &a); //%[^\n]s
    // printf("%s", a);

    char b[5];
    scanf("%[!'e']s", &b); //
    printf("%s", b);
}
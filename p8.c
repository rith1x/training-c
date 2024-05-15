// Pranav, an enthusiastic kid visited the "Fun Fair 2017" along with his family. His father wanted him to purchase entry tickets from the counter for his family members. Being a little kid, he is just learning to understand about units of money. Pranav has paid some amount of money for the tickets but he wants your help to give him back the change of Rs. N using minimum number of rupee notes.

// Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If the change given to Pranav Rs. N is input, write a program to compute smallest number of notes that will combine to give Rs. N.

// Note:
// Refer to problem specifications.

// Input Format:
// First line of the input is an integer N, the change to be given to Pranav.

// Output Format:
// Output should display the the smallest number of notes that will combine to give N.
// Refer sample input and output for formatting specifications.

// Sample Input 1:
// 1200

// Sample Output1:
// 12

// Sample Input 2:
// 242

// Sample Output2:
// 7

// Problem Requirements:
// C

#include <stdio.h>

int main()
{
    int cs;
    int ct = 0;
    scanf("%d", &cs);
    ct += cs / 100;
    cs %= 100;
    ct += cs / 50;
    cs %= 50;
    ct += cs / 10;
    cs %= 10;
    ct += cs / 2;
    cs %= 2;
    ct += cs / 1;
    cs %= 1;
    int cf = 67857465;
    printf("%d",length(cf));
}
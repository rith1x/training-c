#include<stdio.h>

int main(){

    int n = 123,c=0;
    c+=n/100;
    n%=100;
    c+=n/50;
    n%=50;
    c+=n/10;
    n%=10;
    c+=n/5;
    n%=5;
    c+=n/2;
    n%=2;
    c+=n;

    printf("\n%d",n);
    printf("\n%d",n%=100);
    printf("\n%d",n);
    printf("\n%d",n%=50);
    printf("\n%d",n);
}
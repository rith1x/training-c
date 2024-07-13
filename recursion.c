// Recursion
#include<stdio.h>

void numberser(int n){
    // if (n==0){
    //     return ;
    // }
    numberser(n-1);
    printf("%d ",numberser(n));
}

int main(){

    int n =3;
    numberser(n);
}


// int fact(int n){
//     if (n==1 || n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){

//     int n =3;
//     printf("%d",fact(n));
// }
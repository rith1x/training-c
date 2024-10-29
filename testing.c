// #include<stdio.h>
// int main (){
//     int x;
//     for (x=1;x<=10;x++){
//         if(x%2==1)
//             continue;
//         printf("%d\t",x);
//     }

//     int a=10,b=6;
//     if(++a || ++b) printf("%d%d",a,b);
// }

#include <stdio.h>
int main(){
int a[5]={1,5,8,7,2};
int i, n, sum=0;
for(i=0; i<5; i++){
sum += a[i];
}
printf("%d\n", sum);
return 0;
} 
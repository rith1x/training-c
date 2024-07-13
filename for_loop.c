// // #include<stdio.h>
// // int main(){
// //     int n,sum=0;
// //     for (int i =1;;i++){
// //         printf("entr\n");
// //         scanf("%d",&n);
        
// //     if (n==-999){
// //         break;
// //     }else{
// //         sum +=n;
// //     }
// //     }
// //     printf("%d",sum);
// // }

// #include<stdio.h>
// int main(){
//     int n =5,c = 2, a = 0;
//     while(a<n){
//         int p = 1;
//         for (int j=2;j*j<=c;j++){
//             if (c%j==0){
//                 p = 0;`
//                 break;
//             }
//             }
//         if (p){
//             printf("%d ",c);
//             a++;   
//         }
//         c++;
//     }       
// }

#include<stdio.h>
int main(){
    for (int i =50;i<=100;i++){
        int p =1;
        for (int j=2;j<i;j++){
            if (i%j==0){
            // printf("\n%d ",i);
            p =0;
            break;
            }
        }
        if (p){
            printf("%d ",i);
        }
    }
}
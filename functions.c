// //Normal function

// #include<stdio.h>
// // function creation

// int add(int a, int b){
//     return a + b;
// }

// int main(){
//     int a = 10 ,b =3;
//     printf("%d",add(a,b));
//     return 0 ;
// }

// int add(int a, int b){
//     return a + b;
// }


// // normal

// #include <stdio.h>
// // user def function

// int add(int ,int );

// int main(){
//     int a= 10, b= 10;
//     printf("%d ",add(a,b));

// }
// int add(int a ,int b ){
//     return a + b ;
// }

// // 1) with return with args

// #include<stdio.h>
// int add(int a, int b);

// int main(){
//     int a = 10 ,b =3;
//     printf("%d",add(a,b));
//     return 0 ;
// }

// // 2) without return type with args

// #include<stdio.h>
// //udf
// void add(int ,int );

// int main(){
//     int a= 10,b= 29;
//     add(a,b);
// }

// void add(int c,int v){
//     printf("%d",c+v);
// }

// // 3) with return without args

#include<stdio.h>
//udf declaration
int add();
// main func
int main(){
    // call
    printf("%d",add());
}
// udf definition
int add(){
    // input 
    int a= 10,b= 39;
    //return
    return a+b;
}

// //  without return without args
// #include<stdio.h>
// void add();

// int main(){
//     add();
// }

// void add(){
//     int a= 10,b= 29;
//     printf("%d",a+b);
// }

// #include<stdio.h>
// int fun(int ,int );
// int main(){
//     int x =2,n =-1;
//     if (n>=0){
//         printf("\n%d",fun(x,n));
//     }else {
//         return 0;
//     }
// }

// int fun(int x,int n){
//     if (n==0){
//         return 1;
//     }else{
//         int srt = x;
//         int sum =0;
//         for (int i =0;i<n-1;i++){
//                 srt*=x;
//                 sum+=srt;
//         }
//     return sum+x;
//     }
// }

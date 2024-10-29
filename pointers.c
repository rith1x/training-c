// // 1) call by value

// #include<stdio.h>
// int add(int c){
//     c+=10;
//     printf("%d\n",c);//op = 20 --->1
//     return c;
// }
// int main(){
//     int a = 10;
//     printf("%d\n",add(a));//op = 20 --->2
//     printf("%d",a); // op = 10 --->3
// }
// // 
// // // call by value
// // #include<stdio.h>
// // int add(int *);
// // // {
// // //     printf("%d\n",*c);// op = 10 ---> 2
// // //     *c+=10;
// // //     printf("%d\n",c);// op = 6422300(mA) --->3
// // //     return *c;
// // // }

// // // 2) call by address
// // int main(){
// //     int a = 10;
// //     printf("%d\n",a); // op = 10 ---> 1
// //     printf("%d\n",add(&a)); // op =20 --->3
// //     printf("%d\n",a); // op = 20 --->4

// // }

// // int add(int *c){
// //     printf("%d\n",*c);// op = 10 --->2
// //     *c+=10;
// //     printf("%d\n",c); // op = 6422300(memory address) --->3
// //     return *c;
// // }

// // ** pointer

// #include<stdio.h>
// int main(){
//     int a =10;
//     int * c=&a;
//     int ** d=&c;
//     int *** e=&d;

//     printf("%d\n",*c);
//     printf("%d\n",c);
//     printf("%p\n",c);
    
//     printf("%d\n",**d);
//     printf("%d\n",d);
//     printf("%p\n",d);

//     printf("%d\n",***e);
//     printf("%d\n",e);
//     printf("%p\n",e);
//     //print the address of previous
//     printf("value %d\n",***e);// d address
//     printf("a address%d\n",**e);// a address
//     printf("d address%d\n",*e);// d address
//     printf("e address%d\n",e);// a address

// }


// satic

#include<stdio.h>
// int* fun(){
//     static int a ;
//     a = 20;
//     printf("\n%p",a);
//     printf("\n%p",&a);
//     // printf("\n%d",*a);
//     return &a;
// }
// int main(){
//     // int a= 10;
//     int* b= fun();
//     printf("%p",b);
//     printf("\n%d",*b);
// }
// int main(){
//     // char * a ="hoo";
//     int d =10;
//     printf("%d",*(&d));//op: h
//     return 0;
// }

// #include<stdio.h>
// int main(){
//  int i = 10;
//  void *p = &i;
//  printf("%f\n", *(float *)p);
//  return 0;
// } 

// string

#include<stdio.h>

int main(){
    char * name= "chandru is lost the last interview";
    printf("%d ",sizeof(name));
    // for(int i=0; i<35; i++){
    //     printf("%c ",*(name+i));
    // }
}
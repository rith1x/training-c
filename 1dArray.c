//array
// 1) 1D array
/*
format specifier:
- %p (hexadecimal)

+ &array ---> array mem.addr
+ &array[i] (or) a+i (or) &i[array] ---> array index mem.addr
+ array[i] (or) *(a+i)= dereferance ---> return the value

Dy.mem allocation:
+ int* a = (int*) malloc(size);
- (int*) malloc(size) ---> allocate the Dy.mem in runtime by the size of pointer variable (int*,float*) with how many size(count)
- int* a ---> hold the allocated heam dy.mem.addr

*/
// #include<stdio.h>

// int main(){
//     int arr[10];
//     int sum=0;

//     for (int i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int i=0;i<10;i++){
//         sum+=arr[i];
//         printf("%d ",arr[i]);
//         printf("%d ",sum);

//     }
// }

// address array
// compli time memory allocation
// the arr base address is same to the 0th indice of the array but the two address are diffirent
// #include<stdio.h>
// int main(){
//     int arr[5]={0,1,2,3,4};
//     int sum=0;

//     // for (int i=0;i<5;i++){
//     //     scanf("%d",&arr[i]);
//     // }
//     for (int i=0;i<5;i++){
//         sum+=arr[i];
//     }
//         // printf("%d ",arr[i]);
    
    // printf("%d ",sum);//op = 15
    // printf("\nbase addr %p",&arr);// ---> return the array base address
    // printf("\narr indice %p",arr);// ---> return the array of arr[0]
    // printf("\narr indice %p",arr+0);//---> return the address of arr[0]
    // printf("\narr indice %p",&0[arr]);//---> return the address of arr[0]

    // printf("\n base addr %p",&arr+1);// ---> return the array base address
    // printf("\n arr indice %p",arr+1);// ---> return the array of arr[0]
    // printf("\n arr indice %p",&arr[1]);// ---> return the array of arr[0]
    // printf("\narr indice %p",&0[arr]+1);//---> (another approach of indice acces) return the address of arr[1]

// }

// dynamic memory allocation

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int sum = 0;
//     // create a dy.mem
//     printf("%d\n",sizeof(int));
//     // allocate the head memoery 
//     int* a= (int*) malloc(5*sizeof(int));

//     for(int i=0;i<=5;i++){
//         // scanf("%d",&a[i]);// ---> index mem.addr
//         scanf("%d",a+i);// ---> index mem.addr (another methord)
//     }
//     for(int i=0;i<=5;i++){
//         printf("\n%d ",a[i]);
//         printf("\n%p ",&a[i]);
//         printf("\n%p ",a+i);
//         sum+=a[i];
//     }
//     printf("\n%d ",a[0]);
//     printf("\n%d",sum);

// }

// // array and function

#include<stdio.h>
int ar(int a[]){
    for (int i=0; i<3; i++){
        printf("%d ",*a+i);
        // printf("%p",a[]);
    }
}
int main(){
    int arr[3]={1 ,2 ,3};
    int arrc[]=arr;
    ar(arrc);
    // for (int i=0;i<3;i++){
    //     scanf("%c",&arr[i]);
    // }
    // for (int i=0;i<3;i++){
    //     printf("%c",arr[i]);
    // }
}
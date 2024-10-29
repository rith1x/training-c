// calloc
/*

int * a = (int *) calloc(n,sizeof(int)); ---> syntex

*/


// dy.mem alloc




// dynamic memory allocation
//1D
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
//     printf("\n%d",sum);

// }
// 2D

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int r=3,c=3;
//     int ** a= (int**)malloc(r*sizeof(int*));
//     for (int i=0;i<r;i++){
//         a[i] = (int*)malloc(c*sizeof(int));
//     }

//     for (int i= 0; i<r;i++){
//         for (int j= 0; j<c; j++){
//             scanf("%d",(*(a+i)+j));
//         }
//     }
//     for (int i= 0; i<r;i++){
//         printf("\n");
//         for (int j= 0; j<c; j++){
//             printf("%d ",*(*(a+i)+j));
//         }
//     }
//     return 0;
// }

//2D and function

// matrix muktiplication

#include<stdio.h>
#include<stdlib.h>

int mult(int **, int **, int r1 ,int c1,int r2, int c2);
int main(){
    int r1=3,c1=3;
    int r2=3, c2=3;
    int ** a= (int**)malloc(r1*sizeof(int*));
    int ** b= (int**)malloc(r2*sizeof(int*));
    for (int i=0;i<r1;i++){
        a[i] = (int*)malloc(c1*sizeof(int));
        b[i] = (int*)malloc(c2*sizeof(int));

    }

    printf("enter the matrix 1\n");
    for (int i= 0; i<r1;i++){
        for (int j= 0; j<c1; j++){
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("enter the matrix 2\n");
    for (int i= 0; i<r2;i++){
        for (int j= 0; j<c2; j++){
            scanf("%d",(*(b+i)+j));
        }
    }

    printf("the matrix 1\n");
    for (int i= 0; i<r1;i++){
        printf("\n");
        for (int j= 0; j<c1; j++){
            printf("%d ",*(*(a+i)+j));
        }
    }
    printf("\nthe matrix 2\n");
    for (int i= 0; i<r2;i++){
        printf("\n");
        for (int j= 0; j<c2; j++){
            printf("%d ",*(*(b+i)+j));
        }
    }

    mult(a,b,r1,c1,r1,c2);
}
int mult(int **a, int **b, int r1 ,int c1,int r2, int c2){
    int sum;
    printf("\nmaltipled matrix:\n");
    for (int i= 0; i<r2;i++){
        for (int j= 0; j<c2; j++){
            sum=0;
            for (int k =0; k<c1; k++){
                sum+= *(*(a+i)+k) * *(*(b+k)+j);
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}

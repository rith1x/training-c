#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Odd Numbers:\n");
    for(int i=0; i<n; i++){
        if(a[i]%2 !=0){
            printf("%d ",a[i]);
        }
    }
    printf("\nEven Numbers:\n");
    for(int i=0; i<n; i++){
        if(a[i]%2 ==0){
            printf("%d ",a[i]);
        }
    }
}
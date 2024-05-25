#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int c = n;
    int ct = 0;
    int x = n;
    int arms = 0;
    while(c!=0){
        ct++;
        c/=10;
    }
    while(n!=0){
        arms= arms+pow(n%10,ct);
        printf("%d\n",arms);
        n/=10;
    }
    printf("\nCount:%d\n",ct);
    if(arms+1 == x){
        printf("Yes");
    } else{
        printf("No");
    }
    


}
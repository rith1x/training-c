#include<stdio.h>
int main (){
    int a=10;
    for(int i=0;i<10;i++){
        printf("%d",i);
        if(i==5){
            continue;// ---> if the condition true the control skip rest and go to the looping
        }
        printf("\nHello\n");
    }
    for(int i=0;i<10;i++){
        printf("%d",i);
        if(i==5){
            break;//---> if the condition true the loop break
        }
        printf("\nHello\n");
    }
}
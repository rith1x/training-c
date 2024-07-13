#include<stdio.h>
int main(){
    int arr[10]={10, 4, -5, -9, 7, 1, 2, 0, 3, 1};

    // selection sorting 

    for (int i= 0; i<10; i++){
        int min = i;
        for ( int j= i+1; j<10 ; j++){
            if (arr[j]<arr[min]){
                min = j;
                // printf(" \n min pos %d", arr[j]);
            }
        }
        if(min !=i){ 
            int tem = arr[min];
            arr[min]= arr[i];
            arr[i]= tem;
        }
        printf("%d ",arr[i]);
    }
    
    // for (int i=0; i<10; i++){
    // }

    // int brr[50]={0};
    // distict and count
    // for (int i=0; i<10; i++){
    //     brr[arr[i]]++;
    // }
    // for (int i=0; i<50; i++){
    //     if(brr[i]!=0){
    //         printf("\nvalue %d count %d",i,brr[i]);
    //     }
    // }
    // int pos=0;
    // int min;
    // for(int i=0; i<10; i++){
    //     int min=i;
    //     // int point=0;
    //     for(int j=pos; j<10; j++){
    //         if(arr[j]<min){
    //             // min = arr[j];
    //             min = j;
    //             pos++;
    //             // point++;
    //         }
    //         // pos++;
    //     }
    //     int tem = arr[i];
    //     arr[i] = arr[min];
    //     arr[min]= tem;
    //     // pos++;
    // }

    // for (int i=0; i<10; i++){
    //     printf("%d ",arr[i]);
    // }
}
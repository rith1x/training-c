#include<stdio.h>
#include<stdlib.h>

int main(){
    int row = 3, clm = 5;

    char ** arr = (char**) malloc(row * sizeof(char*));

    for (int i = 0; i<row; i++){
        *(arr+i) = (char*) malloc(clm*sizeof(char*));
    }

    for (int i = 0; i<row; i++){
        printf("row\n %d",i+1);
        for (int j =0; j<clm; j++){
            printf("colm \n%d",i+1);
            scanf("%c",arr[i][j]);
        }
    }
    for (int i = 0; i<row; i++){
        for (int j =0; j<clm; j++){
            printf("%s",arr[i][j]);
        }
    }
}
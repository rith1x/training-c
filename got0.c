#include <stdio.h>

int main(){

int a = 10;
king:
if (a == 0){
    goto end;
}
printf("Try %d\n",a);
a--;

if(a !=0){
    goto king;
}

end:
printf("Mudinchu");
}
#include <stdio.h>

int divide(int dividend, int divisor) {
    if(dividend<=-2147483648 || dividend>=2147483647 || divisor<=-2147483648 || divisor>=2147483647 ){
        return 0;
    }
    long ans=0;
    int dvflag = 0,dsflag = 0;
    
    if (dividend<0){
        dvflag = 1;
        dividend = -dividend;
    }
    if (divisor <0){
        dsflag = 1;
        divisor = -divisor;
    }
    while(dividend>=divisor){
        dividend-=divisor;
        ans+=1;
    }
    if((dvflag == 0 && dsflag == 0) || (dvflag == 1 && dsflag == 1)){
        return ans;
    }else{
        -ans;
    }
    return ans;
}
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int r = divide(n, m);
    printf("%d", r);
}
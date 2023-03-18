#include <stdio.h>

void sma(int a,int b,int *sum,int *mul,float *avg);
int main(){
    int a,b;
    int sum,mul;
    float avg;
    printf("pls enter the a \n");
    scanf("%d", &a);
    printf("pls enter the b \n");
    scanf("%d", &b);
    sma(a,b,&sum,&mul,&avg);
    printf("sum = %d, multiplication =%d, average = %f \n", sum,mul,(float)avg);
    return 0;
}
void sma(int a,int b,int *sum,int *mul,float *avg){
    *sum=a+b;
    *mul=a*b;
    *avg=(a+b)/2;
}

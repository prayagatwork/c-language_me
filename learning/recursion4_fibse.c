#include <stdio.h>

int fib(int n);
int main(){
    int a;
    printf("pls enter the value of number \n");
    scanf("%d", &a);
    fib(a);
    printf("the fibnonessi nth term is %d \n", fib(a));
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    int fibf=fib(n-2)+fib(n-1);
    //printf("fib of %d is : %d \n", n, fibf);
    return fibf;
}
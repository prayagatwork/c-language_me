#include <stdio.h>

int fib(int n);
int main(){
    return 0;
}
int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ffib=fib(n-1)+fib(n-2);
    return ffib;
}
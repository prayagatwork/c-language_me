#include <stdio.h>
int main(){
    int a=6;
    int b=6;
    //a=a+b; instead of these we can write it as
    a+=b;
    printf("%d \n", a);
    return 0;
}
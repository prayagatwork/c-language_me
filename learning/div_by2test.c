#include <stdio.h>
int main(){
    int a;
    printf("pls enter the number for divisble test of 2\n");
    scanf("%d", &a);
    /*if(a%2==0){
        printf("yes!! it is divisible by 2\n");
    }else{
        printf("sorry these no is not divisible by 2\n");
    }*/ 

    // instead of these we can use t/f method

    printf("%d", a%2==0);
    return 0;
}
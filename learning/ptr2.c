#include <stdio.h>
int main(){

    int *ptr;
    int x;
    ptr=&x;
    *ptr=0;
    printf("x is %d \n", x); // 0
    printf("*ptr is %d \n", *ptr); // 0

    *ptr+=5; // here *ptr = *ptr + 5
    printf("x is %d \n", x);           // here the value of x will be updated to 5
    printf("*ptr is %d \n", *ptr);  // as *ptr means the value of x then it will updated too to 5
    
    (*ptr)++;   // here *ptr=*ptr+1
    printf("x is %d \n", x);  // here the value of x will be updated to 6
    printf("*ptr is %d \n", *ptr);  // as *ptr means the value of x then it will updated too to 6
    return 0;
}
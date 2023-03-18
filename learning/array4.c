#include <stdio.h>
int main(){
    int a=2;
    int b=4;
    int *ptr1=&a;
    int *ptr2=&b;
    printf("ptr1=%u \n", ptr1);
    printf("ptr2=%u \n", ptr2);
    printf("diff btw two ptr is %u \n", (ptr1-ptr2));
    return 0;
} 
#include <stdio.h>
int main(){
    int a=3;
    int *ptr=&a;
    int _a=*ptr;
    printf("the value of a is %d \n", a);
    printf("the value of a is %u \n", *ptr); // we can use %p as well as %u for priting the address of pointer
    printf("the value of a is %d \n", _a);
    printf("the address of a is %d \n", &a);
    printf("the address of ptr is %d \n", &ptr);
    printf("the address of _a is %d \n", &_a);
    return 0;
}

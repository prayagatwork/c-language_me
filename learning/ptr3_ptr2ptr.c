#include <stdio.h>
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d \n", i);
    printf("%d \n", *ptr);
    printf("%d \n", *pptr);   // address of *ptr
    printf("%d \n", **pptr);   // value at *(*ptr)=i=5
    return 0;
} 


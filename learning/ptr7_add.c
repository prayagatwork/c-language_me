#include <stdio.h>

void add(int n);
void _add(int *n);
int main(){
    int n=4;
    printf("add of n is %d \n",(int) &n);
    add(n);
    _add(&n);

    return 0;
}
void add(int n){
    printf("%d \n", (int)&n);
}
void _add(int *n){
    printf("%d \n", (int)&*n);
}
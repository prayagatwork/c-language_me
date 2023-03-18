#include <stdio.h>

void swap(int a, int b);
int main(){
    int a,b;
    printf("pls enter the a \n");
    scanf("%d", &a);
    printf("pls enter the b \n");
    scanf("%d", &b);
    printf("add of a is %p \n", &a);
    printf("add of b is %p \n", &b);
    
    swap(a,b);
    return 0;
}
void swap(int a, int b){
    int box;
    box=a;
    a=b;
    b=box;
    printf("now no. a is %d \n", a);
    printf("now no. b is %d \n", b);
}

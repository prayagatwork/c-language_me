#include <stdio.h>
int main(){
    int a,b,perimeter;
    printf("pls enter the first side of rectangle \n");
    scanf("%d", &a);
    printf("pls enter the second side of rectangle \n");
    scanf("%d", &b);
    perimeter=2*(a+b);
    printf("perimeter of a rectangle is %d \n", perimeter);
    return 0;
}
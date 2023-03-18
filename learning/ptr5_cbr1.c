#include <stdio.h>

void _square(int *n);
int main(){
    int num;
    printf("pls enter the number \n");
    scanf("%d", &num);

    _square(&num);
    printf("number is %d \n", num);
    return 0;
}
void _square(int *n){
    *n=(*n)*(*n);
    printf("square is %d \n", *n);
}

/* here we have call the num by it's address(reference) so in the function we have pointer type variable 
which will have address of another variable from main fun then that address will be located by function 
and it will run thus output over here for 
 printf("number is %d \n", num);
 is square of number and not the num itself */
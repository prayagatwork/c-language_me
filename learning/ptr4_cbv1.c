#include <stdio.h>

void square(int n);

int main(){
    int num;
    printf("pls enter the number \n");
    scanf("%d", &num);
    square(num);
    printf("the number is %d \n", num);

    return 0;
}
void square(int n){
    n=n*n;
    printf("square = %d \n", n);
}

// here the num is forward as call by value as it's copy has been made and then pass it to the function
#include <stdio.h>

int fact(int num);
int main(){
    int a;
    printf("pls enter the value of number \n");
    scanf("%d", &a);
    fact(a);
    printf("the value of factorial of number is %d \n", fact(a));
    return 0;
}

int fact(int num){
    if(num==1||num==0){
        return 1;
    }
    int fin;
    fin=fact(num-1)*num;
   // printf("%d \t", fin);
    return fin;
}



#include <stdio.h>

void prime(int n);
int main(){
    int num;
    printf("pls enter a number \n");
    scanf("%d", &num);
    prime(num);
    return 0;
}
void prime(int n){
    int m=1;
    m++;
    while(n==2){
            printf("yes prime \n");
            continue;
        }
    if(n%m==0){
        printf("it is not a prime number \n");
        
    }else{
        printf("yes prime \n");
    }
}
// #include <stdio.h>

// int sum(int n);
// int main(){
//     int a;
//     printf("pls enter the value of number \n");
//     scanf("%d", &a);
//     sum(a);
//     printf("the value of sum of these number is %d \n", sum(a));
//     return 0;
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumnm1=sum(n-1);
//     int sumn=sumnm1+n;
//     return sumn;
// }


#include <stdio.h>

int addi(int n);
int main(){
    int num;
    printf("pls enter the number for its sum \n");
    scanf("%d", &num);
    addi(num);
    printf("summation till the given number %d is : %d \n", num,addi(num));
    return 0;
}
int addi(int n){
    int sum_f=0;
    if(n==1){
        return 1;
    }
    sum_f=addi(n-1)+n;
    return sum_f;
}
#include <stdio.h>
int main(){
    int num1,num2;
    char opr;
    printf("these is simple calculator for 2 numbers operation \n");
    printf("pls enter the numbers and its operation \n");
    scanf("%d%c%d", &num1,&opr,&num2);
    switch (opr)
   {
   case '+': printf("%d\n", num1+num2);
    break;
   case '-': printf("%d\n", num1-num2);
    break;
   case '*': printf("%d\n", num1*num2);
    break;
   case '/': printf("%f\n", (float)num1/num2);
    break;
   
   default:printf("pls enter valid values \n");
    break;
   }
    return 0;
}
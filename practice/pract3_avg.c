#include <stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("pls enter the number one \n");
    scanf("%d", &a);
    printf("pls enter the number two \n");
    scanf("%d", &b);
    printf("pls enter the number three \n");
    scanf("%d", &c);
    avg=(float)(a+b+c)/3;
    printf("average of these number is %f \n", avg);
    return 0;
}
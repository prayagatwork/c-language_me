#include <stdio.h>

float faren(float cel);
int main(){
    float tem;
    printf("pls enter the value of temperature \n");
    scanf("%f", &tem);
    faren(tem);
    printf("the degree conversion is %f \n", faren(tem));
    return 0;
}

float faren(float cel){
    float f;
    f=(float)((9/5)*cel+32);
    return f;
} 


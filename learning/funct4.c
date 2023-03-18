// #include <stdio.h>

// void price(float rup);

// int main(){
//     float value=100;
//     price(value);
//     printf("the value of value is %f \n", value);
//     return 0;
// }

// void price(float value){
//     value=value+(.18*value);
//     printf("final price is %f \n", value);
// }

#include <stdio.h>

void final_p(int price);
int main(){
    int price;
    printf("pls enter the price of a product \n");
    scanf("%d", &price);
    final_p(price);
    return 0;
}
void final_p(int price){
    int final;
    final=(price*.18)+price;
    printf("final price of the product is %d \n", final);
}
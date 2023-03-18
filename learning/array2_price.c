#include <stdio.h>

void fprice(int price);
int main(){
    int price[3];
    printf("pls enter the price of product 1 \n");
    scanf("%d", &price[0]);
    fprice(price[0]);

    printf("pls enter the price of product 2 \n");
    scanf("%d", &price[1]);
    fprice(price[1]);

    printf("pls enter the price of product 3 \n");
    scanf("%d", &price[2]);
    fprice(price[2]);
    return 0;
}
void fprice(int price){
    int fpp;
    fpp=price+(price*0.18);
    printf("the final price of product is %d \n", fpp);
}
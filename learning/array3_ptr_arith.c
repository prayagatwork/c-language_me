#include <stdio.h>
int main(){
    int age=22;
    int*ptr=&age;
    printf("ptr = %u \n", &ptr);
    ptr++;
    printf("ptr = %u \n", &ptr);
    ptr--;
    printf("ptr = %u \n", &ptr);
    return 0;
} 

// #include <stdio.h>
// void final_pr(float price[],int num);
// int main(){
//     int num;
//     printf("pls enter the number of goods \n");
//     scanf("%d", &num);
//     float price[num];
//     for(int i=1;i<=num;i++){
//         printf("pls enter the price for %d item \n", i);
//         scanf("%f", &price[i]);
//     }
//      for(int i=1;i<=num;i++){
//         printf("the price for %d item is %f\n", i,price[i]);
//     }
//     final_pr(price,num);
//      return 0;
// }
// void final_pr(float price[],int num){
//     float final_p[num];
//     for(int i=1;i<=num;i++){
//         final_p[i]=(0.18*price[i])+price[i];
//          if(price[i]<100){
//             final_p[i]=price[i];
//         }
//     }
//      for(int i=1;i<=num;i++){
//         printf("the final price for %d item is %f\n", i,final_p[i]);
//     }
// }
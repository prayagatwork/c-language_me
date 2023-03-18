// #include <stdio.h>
// int main(){
//     int sum=0;
//     for(int i=5;i<=50;i++){
//         sum=sum+i;  // or we can write sum+=i
//     }
//     printf("the value of sum is %d \n", sum);
//     return 0;
// }

#include <stdio.h>
int main(){
    int sum=0;
    for(int i=0;i<=50;i++){
        sum=sum+i;
    }
    printf("series of sum is %d \n", sum);
    return 0;
}
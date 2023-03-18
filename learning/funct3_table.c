// #include <stdio.h>
// void tab(int n);

// int main(){
//     int a;
//     printf("pls enter the number for table \n");
//     scanf("%d", &a);
//     tab(a);
//     return 0;
// }

// void tab(int n){
//     int result;
//     for(int i=1;i<=10;i++){
//         result=n*i;
//         printf("%d \n", result);
//     }
//     //printf("%d \n", result);
// } 

#include <stdio.h>

void tab(int n);
int main(){
    int num;
    printf("pls enter the number of which table you want \n");
    scanf("%d", &num);
    tab(num);
    return 0;
}
void tab(int n){
    int result;
    for(int i=0;i<=10;i++){
        result=n*i;
        printf("%d X %d = %d \n", n,i,result);
    }
}
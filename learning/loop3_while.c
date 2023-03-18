// #include <stdio.h>
// int main(){
//     int n,m;
//     printf("pls enter the beginning of series \n");
//     scanf("%d", &n);
//     printf("pls enter the end of series \n");
//     scanf("%d", &m);
//     while(n<=m){
//         printf("the number is %d \n", n);
//         n++;
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int f,l;
    printf("pls enter the first number of series \n");
    scanf("%d", &f);
    printf("pls enter the last number of series \n");
    scanf("%d", &l);
    while(f<=l){
        printf("%d \n", f);
        f++;
    }
    return 0;
}
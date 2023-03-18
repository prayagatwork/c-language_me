// #include <stdio.h>

// void printhw(int n);

// int main(){
//     int n=6;
//     printhw(n);
//     return 0;
// }
// void printhw(int n){
//     if(n==0){
//         return;
//     }
//     printf("hello world \n");
//     printhw(n-1);
// }

#include <stdio.h>
void printw(int n);
int main(){
    int n;
    printf("pls enter the times of number you want to print \n");
    scanf("%d", &n);
    printw(n);
    return 0;
}
void printw(int n){
    if(n==0){
        return;
    }
    printf("hello world \n");
    printw(n-1);
}
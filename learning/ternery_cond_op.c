// #include <stdio.h>
// int main(){
// int a;
// // these is special way to use operator
// //condition ? if true then execute : if false then execute;
// printf("enter your age\n");
// scanf("%d", &a);
// a<18?printf("your are child\n"):printf("you are adult\n");
//     return 0;
// }

#include <stdio.h>
int main(){
    int a;
    printf("pls enter the value of a \n");
    scanf("%d", &a);
    a<5?printf("yes %d<5\n", a):printf("no %d>5\n", a);
    return 0;
}
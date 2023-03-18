// #include <stdio.h>
// int main(){

//     printf("%d \n", (3>4)); // false=0
//     printf("%d \n", (3<4)&&(5<2)); // false=0  and operator
//     printf("%d \n", (5<7)||(2>3)); // true=1   or operator
//     printf("%d \n", !(5>2)); // false=0        not operator
    
//     return 0;
// } 
// // here priority comes for relation first then logical operators come.

#include <stdio.h>
int main(){
    printf("%d \n", (5>2));     // 1
    printf("%d \n", (5>2)&&(4<5)); // 1
    printf("%d \n", (3>2)||(9<7)); // 1
    printf("%d \n", !(4<6));  // 0
    return 0;
}
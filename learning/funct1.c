// #include <stdio.h>
// void hello(){
//     printf("hello world \n");
// }

// int main(){
//     printf("ok i am working on it \n");
//     hello();
//     return 0;
// }

// // these is the way how we define our function and  how we can create such kind of reusable block of code
#include <stdio.h>
void printing(){
    printf("hello world i am a function \n");
}

int main(){
    printf("welcome to our new galaxy \n");
    printf("now our function will work for you .... \n");
    printing();
    return 0;
   
}
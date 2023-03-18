// #include <stdio.h>

// void ind();
// void fre();

// int main(){
//     char n;
//     printf("pls enter i for indian and f for french \n ");
//     scanf("%c", &n);
//     if(n=='i'){
//          ind();
//     }else{
//         fre();
//     }

// }
// void ind(){
//     printf("namaste \n");
// }
// void fre(){
//     printf("bonjour \n");
// } 

#include <stdio.h>

void welcome(char a);
int main(){
    char nat;
    printf("pls enter your nationanlity for survey \n");
    printf("for indian pls enter 'i' and for french pls enter 'f' \n");
    scanf("%c", &nat);
    welcome(nat);
    return 0;
}
void welcome(char a){
    if(a=='i'){
        printf("Namaste \n");
    }else{
        printf("Bonjour \n");
    }
}
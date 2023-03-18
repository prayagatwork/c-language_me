// #include <stdio.h>
// int main(){
//     int a;
//     // do{
//     //     printf("pls enter the number \n");
//     //     scanf("%d", &a);
//     //     a++;
//     // }while(a%2!=0);
//     // we can also use another method

//     do{
//        printf("pls enter the number \n");
//        scanf("%d", &a); 

//        if(a%7==0){
//         break;
//        }
//     }while(1);
//     printf("thank you for survey\n");
//     return 0;
// }

#include <stdio.h>
int main(){
    int a;
    do{
        printf("pls enter the number \n");
        scanf("%d", &a);
        a++;
        if(a%2==0){
            break;
        }
    }while(1);
        printf("thank you for survey \n");
    
    return 0;
}
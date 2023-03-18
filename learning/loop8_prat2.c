// #include <stdio.h>
// int main(){
//     for(int i=5;i<50;i++){
//         if(i%2==0){
//             // we can even use i%2==0 
//             continue;
//         }
//         printf("the odd no list is \n");
//         printf("%d \n", i);
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
     printf("list of even numbers is : \n");
     for(int i=0;i<50;i++){
        if(i%2!=0){
            continue;
        }
     printf("%d \n", i);
    }
   
    return 0;
}
// #include <stdio.h>
// int main(){
//     for(int a=1;a<=5;a++){
//         if(a==3){
//         continue;}   // here continue block is use to skip that particular only
//         //break;}    // while break will skip whole loop
//         printf("%d \n", a);
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    for(int a=1;a<=5;a++){
        if(a==3){
            break;
        }
        printf("%d \n", a);
    }
    return 0;
}
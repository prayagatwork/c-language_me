#include <stdio.h>
int main(){
    char a;
    printf("pls enter the time of sky light\n");
    printf("add only first letter of it.. ok!!\n");
    scanf("%c", &a);
    if(a=='m'){
        printf("it is morning people\n");
    }
     else if(a=='a'){
        printf("it is afternoon people\n");
     }
     else if(a=='n'){
        printf("it is night people\n");
     }
     else{
        printf("sorry you are blind\n");
     }
    return 0;
}


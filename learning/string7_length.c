#include <stdio.h>

void length(char str[]);
int main(){
    char name[]="ram";
    puts(name);
    length(name);
    return 0;
}
void length(char str[]){
    int count;
    for(int i=1;str[i]!='\0';i++){
        count++;
    }
    printf("total length of string is %d", count);
}
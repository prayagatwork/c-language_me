#include <stdio.h>

void name(char arry[]);
int main(){
    // char name[]={'p','r','a','y','a','g', '\o'};
    // char _name[]={"prayag"};
    // char _1name[]="prayag";
    char first[]="prayag";
    char last[]="thaker";
    name(first);
    name(last);
    return 0;
}
void name(char arry[]){
    for(int i=0;arry[i]!='\0';i++){
        printf("%c", arry[i]);
    }printf("\n"); 
}
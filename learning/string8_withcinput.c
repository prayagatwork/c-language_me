#include <stdio.h>
int main(){
    char name[100];
    char ch;
    int i;
    while(ch!='\n'){
        scanf("%c", &ch);
        name[i]=ch;
        i++;
    }
    name[i]='\0';
    puts(name);
    return 0;
}

// here that while loop is acting as gets functio.. 
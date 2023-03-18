#include <stdio.h>
int main(){
    char name[50];
    fgets(name,50,stdin);
    puts(name);
    return 0;
}

// as gets is not safe to use thus fgets is the one new way to enter the string
// fgets (string name,size,file(stdin));
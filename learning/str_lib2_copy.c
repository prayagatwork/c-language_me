#include <stdio.h>
#include <string.h>
int main(){
    char name[]="prayag";
    char surname[]="thaker";
    strcpy(name,surname);
    puts(name);
    puts(surname);
    return 0;
}
// these function will copy the value of second string to the first string
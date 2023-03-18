#include <stdio.h>
#include <string.h>

int main(){
    char name[100]="prayag ";
    char surname[]="  thaker";
    strcat(name,surname);
    puts(name);
    return 0;
}
// here in concationation we must define the size of first string then only the program will run
// otherwise error will be thrown
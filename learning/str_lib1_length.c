#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("pls enter anything \n");
    fgets(name,100,stdin);
    puts(name);
    strlen(name);
    printf("%lu", strlen(name));   // we can use lu or d both will work but lu is 
                                   //         format specifier for strlen function
    return 0;
}


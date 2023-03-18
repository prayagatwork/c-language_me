#include <stdio.h>
int main(){
    char str[50];
    gets(str);
    puts(str);
    return 0;
}
// we use gets and puts for multi input and output 
// but gets is unsafe to use 
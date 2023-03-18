#include <stdio.h>
#include <string.h>
int main(){
    char fruit[]="prayag";
    char indus[]="zoo";
    strcmp(fruit,indus);
printf("%d \n", strcmp(fruit,indus));
    return 0;
}
// here in compare function if both string are same lenth then value is 0
// if str1>str2 then it will be + value
// if str<str2 then it will be - value 
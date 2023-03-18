#include <stdio.h>
#include <string.h>

void salting(char password[]);
int main(){
    char password[100];

    printf("pls create your password \n");
    scanf("%s", password);
    
    salting(password);
    return 0;
}
void salting(char password[]){
    char newpassword[200];
    char salt[]="1234";
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    printf("your new encripted password is : \n");
    puts(newpassword);
}
// here in salting function we use string copy and string concatination;;
// first with help of strcpy newpassword got value of password
// then with help of strcat newwpassword got attached with salt
// these way salting is done for encrpting your password
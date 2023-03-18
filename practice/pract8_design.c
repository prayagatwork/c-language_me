#include <stdio.h>

void pattern(int n);
int main(){
    int n;
    printf("ple enter a number \n");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
void pattern(int n){
    for(int i=0;i<n;i++){
        printf("* * * * * \n");
    }
}
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("sum2.txt","r");

    int a;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr,"%d",&b);
    fclose(fptr);

    fptr=fopen("sum2.txt","w");
fprintf(fptr,"sum is %d",a+b);
fclose(fptr);
    return 0;
}
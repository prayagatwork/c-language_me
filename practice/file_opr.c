#include <stdio.h>
int main(){

    FILE *fptr,*fptr1;
    int a,b,c;
    char op;
    fptr=fopen("abc.txt","r+");
    fptr1=fopen("xyz.txt","w");
    
    while(1){
        fscanf(fptr,"%d%c%d",&a,&op,&b);
        printf("nos are %d and %d \n",a,  b);
        printf("operation is %c\n", op);
        switch(op){
            case'+':c=a+b;break;
            case'*':c=a*b;break;
            case'%':c=a%b;break;
            case'/':c=a/b;break;
            case'-':c=a-b;break;
        }

        printf("output is %d\n", c);
        fprintf(fptr1,"%d\n", c);
        if(fgetc(fptr)=='\n')
        continue;

        if(fgetc(fptr)==EOF)
        break;
    }

    fclose(fptr);
    fclose(fptr1);
    return 0;

    }
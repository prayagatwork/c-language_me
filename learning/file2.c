#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("trial.txt","w");
    char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("character is %c \n", ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character is %c \n", ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character is %c \n", ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character is %c \n", ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character is %c \n", ch);
    // fclose(fptr);

// fprintf(fptr,"%c",'M');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c",'N');
// fprintf(fptr,"%c",'G');
// fprintf(fptr,"%c",'O');

// printf("%c \n",fgetc(fptr));
// printf("%c \n",fgetc(fptr));
// printf("%c \n",fgetc(fptr));
// printf("%c \n",fgetc(fptr));
// printf("%c \n",fgetc(fptr));

fputc('M',fptr);
fputc('A',fptr);
fputc('N',fptr);
fputc('G',fptr);
fputc('O',fptr);
fclose(fptr);
    return 0;
}
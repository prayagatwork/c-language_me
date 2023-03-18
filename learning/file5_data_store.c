#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("data2.txt", "a");

    char name[100];
    int age;
    float cgpa;

    printf("enter your name\n");
    scanf("%s", name);
    printf("enter your age\n");
    scanf("%d", &age);
    printf("enter your cgpa\n");
    scanf("%f", &cgpa);

fprintf(fptr,"student name %s \n",name);
fprintf(fptr,"student name %d \n",age);
fprintf(fptr,"student name %f \n",cgpa);
fclose(fptr);
    return 0;
}
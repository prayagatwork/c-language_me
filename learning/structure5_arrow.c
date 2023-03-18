#include <stdio.h>
int main(){
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
        struct student s1={"prayag", 54 , 9.5};
        struct student *ptr=&s1;

        printf("name = %s \n", ptr->name);
        printf("roll no. = %d \n", ptr->roll);
        printf("cgpa = %f \n", ptr->cgpa);
    return 0;
}
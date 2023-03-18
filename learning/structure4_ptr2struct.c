#include <stdio.h>
int main(){

    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
    struct student s1={"prayag", 54 , 9.5};
    printf("name , roll no, cgpa : %s, : %d, : %f \n", s1.name,s1.roll,s1.cgpa);

    struct student *ptr=&s1;
    printf("name %s \n", (*ptr).name);
    return 0;
}
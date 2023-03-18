#include <stdio.h>
#include <string.h>
int main(){

    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
    
    struct student cse[100];
    strcpy(cse[0].name,"prayag");
    cse[0].roll=54;
    cse[0].cgpa=9.5;
    printf("name = %s, rollno. = %d, cgpa = %f \n", cse[0].name,cse[0].roll,cse[0].cgpa);

    strcpy(cse[1].name,"ram");
    cse[1].roll=53;
    cse[1].cgpa=9.2;
    printf("name = %s, rollno. = %d, cgpa = %f \n", cse[1].name,cse[1].roll,cse[1].cgpa);
    return 0;
}

// these way we can defined structure as an array
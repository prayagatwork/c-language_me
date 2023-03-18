#include <stdio.h>
int main(){

    struct student{
        char name[100];
        int roll;
        float cgpa;
    };

    struct student s1={"prayag",54,9.5};
    struct student s2={"ram",53,9.0};
    struct student s3={"krishna",52,9.9};

printf("name = %s, rollno. = %d, cgpa = %f \n", s1.name, s1.roll, s1.cgpa);
printf("name = %s, rollno. = %d, cgpa = %f \n", s2.name, s2.roll, s2.cgpa);
printf("name = %s, rollno. = %d, cgpa = %f \n", s3.name, s3.roll, s3.cgpa);

    return 0;
}
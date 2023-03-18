#include <stdio.h>
int main(){
    typedef struct student{
        char name[100];
        int roll;
        float cgpa;
    }stu;
    stu s1={"prayag", 54 , 9.7};
    stu s2={"ram", 53 , 9.3};
    stu s3={"shiva", 52 , 9.8};

printf("name , rollno. , cgpa, : %s, %d, %f \n", s1.name,s1.roll,s1.cgpa);
printf("name , rollno. , cgpa, : %s, %d, %f \n", s2.name,s2.roll,s2.cgpa);
printf("name , rollno. , cgpa, : %s, %d, %f \n", s3.name,s3.roll,s3.cgpa);

    return 0;
}
// typedef is used to give petname(alias) to our function

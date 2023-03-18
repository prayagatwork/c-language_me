#include <stdio.h>
#include <string.h>
int main(){

    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
    
    struct student s1;
    strcpy(s1.name,"prayag");
    s1.roll=53;
    s1.cgpa=9.5;
    printf("name = %s, rollno. = %d, cgpa = %f ", s1.name,s1.roll,s1.cgpa);
    return 0;
}
// structure is special vaiable which is user defined
// stuct define{

// };
// then we need to define a vaiable for struct
// then by . operator we can call it and asign it a value
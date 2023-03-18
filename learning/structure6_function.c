#include <stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};
void sprint(struct student s1);

int main(){
    struct student s1={"prayag", 54 , 9.6};
    sprint(s1);
    return 0;
}
void sprint(struct student s1){
    printf("below is an information \n");
    printf("name = %s \n", s1.name);
    printf("name = %d \n", s1.roll);
    printf("name = %f \n", s1.cgpa);

}
 
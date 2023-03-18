#include <stdio.h>

struct vector{
    int x;
    int y;
};
void vectsum(struct vector v1,struct vector v2,struct vector add);
int main(){
    struct vector v1={3,4};
    struct vector v2={2,7};
    struct vector add;
    vectsum(v1,v2,add);
    return 0;
}
void vectsum(struct vector v1,struct vector v2,struct vector add){
    add.x=v1.x+v2.x;
    add.y=v1.y+v2.y;
    printf("the sum of x component is %d \n", add.x);
    printf("the sum of y component is %d \n", add.y);
}
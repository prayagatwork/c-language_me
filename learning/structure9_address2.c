#include <stdio.h>
 struct address{
        int num;
        int block;
        char city[100];
        char state[100];
    };
int main(){
     struct address adds[5];
    printf("pls enter thr info for first person \n");
    scanf("%d\n", &adds[0].num);
    scanf("%d\n", &adds[0].block);
    scanf("%s\n", adds[0].city);
    scanf("%s\n", adds[0].state);
    printf("pls enter thr info for second person \n");
    scanf("%d", &adds[1].num);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);
    printf("pls enter thr info for third person \n");
    scanf("%d", &adds[2].num);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);
    printf("pls enter thr info for fourth person \n");
    scanf("%d", &adds[3].num);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);
    printf("pls enter thr info for fifth person \n");
    scanf("%d", &adds[4].num);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printf("address of 1st person is %d,%d,%s,%s\n", adds[0].num,adds[0].block,adds[0].city,adds[0].state);
    printf("address of 2st person is %d,%d,%s,%s\n", adds[1].num,adds[1].block,adds[1].city,adds[1].state);
    printf("address of 3st person is %d,%d,%s,%s\n", adds[2].num,adds[2].block,adds[2].city,adds[2].state);
    printf("address of 4st person is %d,%d,%s,%s\n", adds[3].num,adds[3].block,adds[3].city,adds[3].state);
    printf("address of 5st person is %d,%d,%s,%s\n", adds[4].num,adds[4].block,adds[4].city,adds[4].state);

    return 0;
}
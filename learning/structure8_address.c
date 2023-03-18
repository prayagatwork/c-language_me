#include <stdio.h>
int main(){

    typedef struct address{
        int num;
        int block;
        char city[100];
        char state[100];
    }add;

    add p1={91,4,"vadodara", "gujarat"};
    add p2={9 ,5,"mumbai", "maharashtra"};
    add p3={93,6,"surat", "gujarat"};
    add p4={12,7,"delhi", "delhi"};
    add p5={18,3,"ahemdabad", "gujarat"};

printf("house num= %d, block no= %d, city= %s, state= %s \n", p1.num,p1.block,p1.city,p1.state);
printf("house num= %d, block no= %d, city= %s, state= %s \n", p2.num,p2.block,p2.city,p2.state);
printf("house num= %d, block no= %d, city= %s, state= %s \n", p3.num,p3.block,p3.city,p3.state);
printf("house num= %d, block no= %d, city= %s, state= %s \n", p4.num,p4.block,p4.city,p4.state);
printf("house num= %d, block no= %d, city= %s, state= %s \n", p5.num,p5.block,p5.city,p5.state);

    return 0;
}
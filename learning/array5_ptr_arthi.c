#include <stdio.h>
int main(){
    int adh[5];

    // input
    int *ptr= &adh[0];
    for(int i=0;i<5;i++){
        printf("%d index : \n", i);
        scanf("%d", (ptr+i));
        //  scanf("%d", *adh[i]); we would get same result
    }
    // output
    for(int i=0;i<5;i++){
        printf("%d index = %d \n", i, *(ptr+i));
        // printf("%d index = %d \n", i, adh[i]); we would get same result

    }
    return 0;
}
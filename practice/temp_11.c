// #include <stdio.h>
// int main(){

//     int ary[]={1,5,2,8,9,3};
//     int *p;
//     p=ary;

//     int larg;

//     for(int i=0;i<6;i++){
//         if(*p>larg){
//             larg=*p;
//         }
//         p++;
//     }

//     printf("%d is the largest \n", larg);
//     return 0;
// }

#include <stdio.h>
int main(){

    int s;
    printf("pls enter the size of an array\n");
    scanf("%d", &s);
    int ary[s];

    for(int i=0;i<s;i++){
        scanf("%d", &ary[i]);
    }

    for(int i=0;i<s;i++){
        printf("%d", ary[i]);
    }

    return 0;
}
// #include <stdio.h>
// int main(){
//     int marks[3];
//     printf("pls enter your marks of math \n ");
//     scanf("%d", &marks[0]);
//     printf("pls enter your marks of chemistry \n ");
//     scanf("%d", &marks[1]);
//     printf("pls enter your marks of physics \n ");
//     scanf("%d", &marks[2]);
//     printf("you have entered %d, %d, %d repectively for m c p \n",marks[0],marks[1],marks[2]);
//     return 0;
// }

// // we can even predefined array by syntax of marks[3]={1,2,3};


// #include <stdio.h>
// void marks(int marks[], int n);
// int main(){
//     int n;
//     printf("pls enter the number of students \n");
//     scanf("%d", &n);
//     int marks[n];
//     for(int i=1;i<=n;i++){
//         printf("pls enter the marks of student %d\n", i);
//         scanf("%d",&marks[i]);
//     }
//     for(int i=0;i<=n;i++){
//         printf("entered marks for student %d is %d \n", i+1, marks[i]);
//     }

//     return 0;
// }

#include <stdio.h>
void final_ct(int obj[],int num);
int main(){
    int num;
    printf("pls enter number of goods \n");
    scanf("%d", &num);
    int obj[num];
    for(int i=0;i<=num;i++){
        printf("pls enter the cost of obj 1 \n");
        scanf("%d", &obj[i]);
    }
    final_ct(obj[num],num);
    return 0;
}
void final_ct(int obj[],int num){
    int final_pr[num];
    for(int i=0;i<=num;i++){
        final_pr[i]=(0.18*obj[i])+obj[i];
        printf("final price of product %d is %f", i,(float)final_pr[i]);
    }
}
// #include <stdio.h>
// int main(){
//     int i=0;
//     int n;
//     int sum=0;
//     printf("pls enter the number till where you want the sum of it  \n");
//     scanf("%d", &n);
//     for(i=0;i<=n;i++){
//         sum=sum+i;
//     }
//        printf("the sum of numbers is %d\n", sum);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i=0;
//     int n;
//     int sum=0;
//     printf("pls enter the number till where you want the sum of series \n");
//     scanf("%d", &n);
//     for(i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("sum of series is %d \n", sum);
//     return 0;
// }

void series_sum(int s,int l);
#include <stdio.h>
int main(){
    int s,l;
    printf("pls enter the starting number \n");
    scanf("%d", &s);
    printf("pls enter the last number \n");
    scanf("%d", &l);
    series_sum(s,l);
    return 0;
}
void series_sum(int s,int l){
    int sum=0;
    for(s;s<=l;s++){
        sum=sum+s;
    }
    printf("sum of series is %d \n", sum);
}
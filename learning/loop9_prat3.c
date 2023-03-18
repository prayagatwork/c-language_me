// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("pls enter the number \n");
//     scanf("%d", &n);

//     int fact = 1;
//     int a;
//     for (a = 1; a <= n; a++)
//     {
//         fact = fact * a;
//     }
//     printf("the factorial is %d \n", fact);
//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    printf("pls enter the number \n");
    scanf("%d", &n);

    int fact=1;
    int a;
    for(a=1;a<=n;a++){
        fact=fact*a;
    }
    printf("the factorial is %d \n", fact);
    return 0;
}
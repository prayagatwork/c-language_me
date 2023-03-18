// #include <stdio.h>
// int main(){
//     int rank; char ch;
//     printf("pls rate our service \n");
//     printf("on the scale of 1 - 5\n");
//     scanf("%d", &rank);

//     switch(rank){
//         case 1: printf("sorry for poor rating\n");
//         break;
//         case 2: printf("we are going to improve\n");
//         break;
//         case 3: printf("thanks for avg rating\n");
//         break;
//         case 4: printf("we would add more service to elighth you\n");
//         break;
//         case 5: printf("hurrah!! we got full 5 rated service\n");
//         break;
//         default: printf("you have rated out of scale\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int rating;
    printf("pls enter the rating for our service \n");
    scanf("%d", &rating);
    switch(rating){
        case 1: printf("we will improve our rating \n");
        break;
        case 2: printf("we will update our rating \n");
        break;
        case 3: printf("thank you for rating \n");
        break;
        case 4: printf("excellent rating \n");
        break;
        case 5: printf("top rated service \n");
        break;
    }
    return 0;
}
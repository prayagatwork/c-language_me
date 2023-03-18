#include <stdio.h>

int odd(int arry[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    printf("%d \n", odd(arr,6));
    return 0;
}
int odd(int arry[],int n){
    int count=0;
    for(int i;i<n;i++){
        if(arry[i]%2!=0){
            count++;
        }
    }
    return count;
}
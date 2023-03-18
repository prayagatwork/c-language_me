#include <stdio.h>

void rev(int arr[],int n);
void patt(int arr[],int n);

int main(){
    int arry[]={1,2,3,4,5};
    rev(arry,5);
    patt(arry,5);
    return 0;
}
void rev(int arr[],int n){
    for(int i=0;i<(n/2);i++){
        int first=arr[i];
        int second=arr[n-i-1];
         arr[i]=second;
        arr[n-i-1]=first;
    }
}
void patt(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
} 
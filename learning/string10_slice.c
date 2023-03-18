#include <stdio.h>

void slice(char name[],int n,int m);
int main(){
    char name[]="prayagthaker";
    int n=2,m=4;
    slice(name,n,m);
    return 0;
}
void slice(char name[],int n,int m){
    char newname[200];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newname[j]=name[i];
    }
    newname[j]='\0';
    puts(newname);
} 
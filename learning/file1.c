#include <stdio.h>
int main(){

    FILE *fptr;
    fptr=fopen("trial.txt","r");
    fclose(fptr);
    return 0;
}

// file ptr creat
// fptr=fopen("file name", "mode");
//fclose(fptr);
//mode-> "r"-read 
//"rb"-read binary
//"w"-write
//"wb"-write binary
//"a"-append(old data +new data) 
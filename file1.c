#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file1.txt","a");
    if(fp==NULL){
            printf("file not opened\n");
    }else{
            printf("file opened successfully\n");
    }

}
#include<stdio.h>
void inputchar(char c) {
    printf("value revived from main: %c\n", c);}
    int main (){
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    getchar();
    inputchar(c);
    return 0;
    }
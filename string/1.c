//wap to find the length of a string without using strlen function

#include<stdio.h>
int main(){
    char s[1000];
    gets(s);
    int length = 0;
    // Calculate the length of the string manually
    while (s[length] != '\0') {
        length++;
    }
    printf("The length of the string is: %d\n", length);
    return 0;
    
}
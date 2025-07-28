//wap to concatenate two strings without using strcat function
#include<stdio.h>
int main() {    
    char str1[100], str2[100];
    gets(str1);
    gets (str2);
    int i = 0, j = 0;
    // Find the end of the first string
    while (str1[i] != '\0') {
        i++;
    }   
    // Append the second string to the first
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }   
    // Null-terminate the concatenated string
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}



    
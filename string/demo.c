#include<stdio.h>
int main (){
    char str1[1000], str2[1000];
    scanf("%[^\n]s", str1);
    //write the code to copy str1 to str2
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // Null-terminate the copied string
    printf("Copied string: %s\n", str2);
    return 0;
}
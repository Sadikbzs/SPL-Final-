//wap to count the occurrences of a character in a string without using any library function
#include <stdio.h>
int main (){
    char str[1000];
    char ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);
    
    printf("Enter the character to count: ");
    ch = getchar();
    getchar(); 
    // To consume the newline character after entering the character
    // Count occurrences of the character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Occurrences of '%c': %d\n", ch, count);
    return 0;
    
}
//wap to count the words in a string without using any library function
#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);
    
    // Count words by checking for spaces
    for (i = 0; str[i] != '\0'; i++) {
        // If the current character is a space and the next character is not a space,
        // it indicates the start of a new word.
        if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && 
            (str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t' && str[i + 1] != '\0')) {
            count++;
        }
    }
    
    // If the string is not empty, count the last word
    if (i > 0 && str[0] != ' ' && str[0] != '\n' && str[0] != '\t') {
        count++;
    }
    
    printf("Number of words: %d\n", count);
    return 0;
}
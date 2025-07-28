//wap to count occurrences of a word in a string without using any library function
#include <stdio.h>
int main (){
char str[1000];
char word[100];
int i, j, count = 0;
printf("Enter a string: ");
gets(str);
printf("Enter the word to count: ");    
gets(word);
// Count occurrences of the word
for (i = 0; str[i] != '\0'; i++) {
    // Check if the current position matches the start of the word
    int match = 1;
    for (j = 0; word[j] != '\0'; j++) {
        if (str[i + j] != word[j]) {
            match = 0; // Not a match
            break;
        }
    }
    // If a match is found, increment the count
    if (match && (str[i + j] == ' ' || str[i + j] == '\0')) {
        count++;
        i += j - 1; // Move index to the end of the matched word
    }
    }
printf("Occurrences of '%s': %d\n", word, count);
return 0;
}
//wap to revarse the words in a string 
#include <stdio.h>
#include <string.h>
int main(){
    char str[100], reversed[100];
    int i, j, start, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets for safer input

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    end = strlen(str) - 1;
    j = 0;

    // Reverse the entire string first
    for (i = end; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0'; // Null-terminate the reversed string

    // Now reverse each word in the reversed string
    start = 0;
    for (i = 0; i <= j; i++) {
        if (reversed[i] == ' ' || reversed[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char temp = reversed[start];
                reversed[start++] = reversed[end];
                reversed[end--] = temp;
            }
            start = i + 1; // Move to the next word
        }
    }

    printf("Reversed words in the string: %s\n", reversed);
    return 0;
}
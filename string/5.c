//wap to reverse a string without using strrev function
#include <stdio.h>
int main() {
    char str[1000];
    int i, j;
    
    printf("Enter a string: ");
    gets(str);
    
    // Find the length of the string
    for (i = 0; str[i] != '\0'; i++);
    
    // i now contains the length of the string
    i--; // Adjust to point to the last character
    
    // Reverse the string in place
    for (j = 0; j < i; j++, i--) {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
    
    printf("Reversed string: %s\n", str);
    return 0;
}
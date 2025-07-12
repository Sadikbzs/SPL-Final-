//wap to find the maximum occurring character in a string

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count[256] = {0}; // Array to store count of each character
    int maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets for safer input

    // Count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') { // Ignore newline character
            count[(unsigned char)str[i]]++;
            if (count[(unsigned char)str[i]] > maxCount) {
                maxCount = count[(unsigned char)str[i]];
                maxChar = str[i];
            }
        }
    }

    printf("Maximum occurring character: '%c' with %d occurrences\n", maxChar, maxCount);
    return 0;
}
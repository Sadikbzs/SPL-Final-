//wap to remove all duplicate characters from a string without using any library functions
#include<stdio.h>
int main() {
    char str[100], result[100];
    int i, j, k, found;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    k = 0; // Index for result array
    for (i = 0; str[i] != '\0'; i++) {
        found = 0;
        // Check if str[i] is already in result
        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                found = 1;
                break;
            }
        }
        // If not found, add to result
        if (!found) {
            result[k++] = str[i];
        }
    }
    result[k] = '\0'; // Null-terminate the result string

    printf("String after removing duplicates: %s\n", result);
    return 0;
}

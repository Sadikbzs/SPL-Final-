//wap to add the digits in a string
#include <stdio.h>
int main() {
    char str[1000];
    int sum = 0;

    printf("Enter a string: ");
    gets(str);

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a digit
        if (str[i] >= '0' && str[i] <= '9') {
            // Convert character to integer and add to sum
            sum += str[i] - '0';
        }
    }

    printf("Sum of digits in the string: %d\n", sum);
    return 0;
}
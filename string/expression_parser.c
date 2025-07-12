#include <stdio.h>
#include <stdlib.h>

int main() {
    char expression[100];
    int num1 = 0, num2 = 0;
    char operator= 0;
    int i = 0, j = 0;

    printf("Enter the expression (e.g. 12954+2325): ");
    if (fgets(expression, sizeof(expression), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Parse first number
    while (expression[i] >= '0' && expression[i] <= '9') {
        num1 = num1 * 10 + (expression[i] - '0');
        i++;
    }

    // Parse operator
    operator= expression[i];
    i++;

    // Parse second number
    while (expression[i] >= '0' && expression[i] <= '9') {
        num2 = num2 * 10 + (expression[i] - '0');
        i++;
    }

    // Perform operation
    int result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            printf("Result: %d\n", result);
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 % num2;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    return 0;
}

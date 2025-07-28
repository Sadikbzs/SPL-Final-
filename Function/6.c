#include <stdio.h>

// Function to calculate the sum of n numbers
int calculateSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum In Function: %d\n", sum);
    return sum;
}

int main() {
    int arr[100], n = 0, num;

    // Taking input until newline (Enter is pressed)
    printf("Enter numbers (press Enter to stop): ");
    while (scanf("%d", &num) == 1) {
        arr[n++] = num;
        if (getchar() == '\n') break;
    }

    int total = calculateSum(arr, n);
    printf("Sum In Main: %d\n", total);

    return 0;
}

//wap to determine only even numbers in an array of input integers
#include <stdio.h>
void findEvenNumbers(int arr[], int size) {
    printf("Even numbers in the array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main() {
    int arr[100], size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findEvenNumbers(arr, size);

    return 0;
}
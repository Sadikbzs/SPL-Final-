//function that multiplies the array elements by 2 and returns the array
#include <stdio.h>
void multiplyByTwo(int arr[], int size) {
    printf("Array elements multiplied by 2: ");
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
        printf("%d ", arr[i]);
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

    multiplyByTwo(arr, size);

    return 0;
}
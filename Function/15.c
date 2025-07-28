//functions that finds and returns the minimum value in an array
#include <stdio.h>
void findMinValue(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Minimum value in the array: %d\n", min);
}

int main() {
    int arr[100], size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMinValue(arr, size);

    return 0;
}
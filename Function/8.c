#include<stdio.h>
int revrse(int arr[], int n) {
    int i, j, temp;
    for(i = 0, j = n - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return 0;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    revrse(arr, n);
    
    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
#include<stdio.h>
int calculateSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum In Function: %d\n", sum);
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int total = calculateSum(arr, n);
    printf("Sum Outside Function: %d\n", total);
    return 0;
}
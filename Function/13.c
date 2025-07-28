#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("value in function: a = %d, b = %d\n", *a, *b);
}
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("value in main: a = %d, b = %d\n", a, b);
    return 0;
}
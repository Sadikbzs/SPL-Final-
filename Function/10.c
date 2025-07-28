#include<stdio.h>
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}
int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    if (exp < 0) {
        printf("Exponent should be a non-negative integer.\n");
    } else {
        printf("%d raised to the power of %d is %d\n", base, exp, power(base, exp));
    }
    return 0;
}
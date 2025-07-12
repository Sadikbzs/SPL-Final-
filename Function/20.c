//wap function gennthprime to compute the nth prime number
#include <stdio.h>
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int nth_prime(int n) {
    int count = 0;
    int num = 1;
    while (count < n) {
        num++;
        if (is_prime(num)) {
            count++;
        }
    }
    return num;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int prime = nth_prime(n);
    printf("The %dth prime number is %d\n", n, prime);
    return 0;
}
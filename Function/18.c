//function to find the prime number
#include <stdio.h>
void find_prime(int n) {
    int is_prime;
    printf("Prime numbers up to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        is_prime = 1; // Assume i is prime
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; // i is not prime
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;

    printf("Enter a number to find all prime numbers up to that number: ");
    scanf("%d", &n);

    find_prime(n);

    return 0;
}
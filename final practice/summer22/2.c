// summer22/2.c
//it is a problrem of recursion and prime numbers so dont practice it


#include <stdio.h>

// Recursive function to convert number to base 6
int convBase(int num) {
    if (num == 0)
        return 0;
    return (num % 6) + 10 * convBase(num / 6);
}

// Helper function to sum digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

// Count primes between *a and *b (inclusive)
int primeChecker(int* a, int* b) {
    int count = 0;
    for (int i = *a; i <= *b; i++) {
        if (isPrime(i))
            count++;
    }
    return count;
}

// Get first digit of a number
int firstDigit(int n) {
    while (n >= 10)
        n /= 10;
    return n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Condition 1: Base 6 conversion and digit sum divisible by 5
    int base6 = convBase(num);
    int digitSum = sumOfDigits(base6);
    int condition1 = (digitSum % 5 == 0);

    // Condition 2: Prime count between 0 and sum of first+last digit > 4
    int first = firstDigit(num);
    int last = num % 10;
    int sum = first + last;

    int a = 0, b = sum;
    int primeCount = primeChecker(&a, &b);
    int condition2 = (primeCount > 4);

    // Final decision
    if (condition1 || condition2)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not prime\n", n);
        return 0;
    }

    int i = 2;
    int isPrime = 1; // assume prime

    while (i * i <= n) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    unsigned long long factorial = 1;
    int i = n;

    while (i > 1) {
        factorial *= i;
        i--;
    }

    printf("%llu\n", factorial);
    return 0;
}
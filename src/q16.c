#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int factorial = 1;
    int i = n;

    if (n == 0 || n == 1) {
        factorial = 1;
    } else {
        do {
            factorial *= i;
            i--;
        } while (i > 1);
    }

    printf("%d\n", factorial);
    return 0;
}
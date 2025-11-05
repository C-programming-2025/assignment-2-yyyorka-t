#include <stdio.h>

int main() {
    int n, absValue;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) {
        absValue = -n;
    } else {
        absValue = n;
    }
    printf("The absolute value of %d is %d\n", n, absValue);

    return 0;
}
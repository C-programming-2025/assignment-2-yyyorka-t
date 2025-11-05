#include <stdio.h>

int main() {
    int i = 2;
    int sum = 0;

    while (i <= 50) {
        sum += i;
        i += 2;
    }

    printf("%d\n", sum);
    return 0;
}
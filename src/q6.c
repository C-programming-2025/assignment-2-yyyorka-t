#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    do {
        printf("%d ", n * i);
        i++;
    } while (i <= 10);

    return 0;
}
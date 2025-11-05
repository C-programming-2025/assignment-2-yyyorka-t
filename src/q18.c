#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= 10) {
        printf("%d ", n * i);
        i++;
    }

    return 0;
}
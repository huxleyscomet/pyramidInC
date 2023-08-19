#include <stdio.h>

int main() {
    int r;
    printf("Please enter the number of rows.");
    scanf_s("%d", &r);

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= r - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

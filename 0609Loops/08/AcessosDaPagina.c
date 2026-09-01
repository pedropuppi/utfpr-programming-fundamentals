#include <stdio.h>

int main() {
    int n, i, j;

    for (n = 3; n <= 9; n += 2) {
        printf("%d\n", n);

        // Parte 1: triângulo
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }

        // Parte 2: formato com espaços
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i == 1 || i == n) {
                    printf("*"); // linha cheia
                } else if (j == 1 || j == i) {
                    printf("*"); // borda esquerda e diagonal
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
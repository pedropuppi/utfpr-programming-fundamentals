#include <stdio.h>

int main() {
    int n, i, j, cresc=0;
    char c;

    printf("Digite o caractere: ");
    scanf(" %c", &c);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("%c", c);
        

        printf("\n");
    }
    }

    return 0;
}
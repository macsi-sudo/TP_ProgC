#include <stdio.h>

int main() {
    int n;
    int i;
    int U0 = 0, U1 = 1, Un;

    printf("Entrez un nombre (max 20) : ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Erreur : la valeur doit etre entre 0 et 20.\n");
        return 0;
    }

    printf("Suite de Fibonacci jusqu'a U%d :\n", n);

    if (n >= 0) printf("0 ");
    if (n >= 1) printf("1 ");

    for (i = 2; i <= n; i++) {
        Un = U0 + U1;
        printf("%d ", Un);
        U0 = U1;   // Décalage
        U1 = Un;
    }

    printf("\n");
    return 0;
}


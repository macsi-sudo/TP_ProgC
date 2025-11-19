#include <stdio.h>

int main() {
    unsigned int n;
    int i;

    printf("Entrez un nombre : ");
    scanf("%u", &n);

    printf("Binaire : ");

    for (i = 31; i >= 0; i--) {
        unsigned int bit = (n >> i) & 1;
        printf("%u", bit);

        if (i % 4 == 0) printf(" "); // pour lisibilité
    }

    printf("\n");
    return 0;
}

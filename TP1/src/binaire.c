#include <stdio.h>

int main(void) {
    unsigned int n = 4096;   // valeur directe
    int i;

    printf("Nombre : %u\n", n);
    printf("Binaire : ");

    for (i = 31; i >= 0; i--) {
        unsigned int bit = (n >> i) & 1;
        printf("%u", bit);
        if (i % 4 == 0) printf(" ");
    }

    printf("\n");
    return 0;
}

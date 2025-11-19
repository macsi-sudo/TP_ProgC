#include <stdio.h>

int main(void) {
    int a = 2;          // valeur de base
    int b = 3;          // exposant
    int resultat = 1;   // stockage du résultat

    for (int i = 0; i < b; i++) {
        resultat = resultat * a;
    }

    printf("%d^%d = %d\n", a, b, resultat);

    return 0;
}

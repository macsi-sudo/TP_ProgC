#include <stdio.h>

int main() {
    int compteur = 5; // tu peux changer cette valeur (doit être < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être inférieur à 10.\n");
        return 1;
    }

    printf("=== Triangle avec des boucles for ===\n\n");

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Conditions pour varier les caractères
            if (i == j || j == 1 || i == compteur)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }

    return 0;
}

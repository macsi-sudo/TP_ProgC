#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tabI[11];
    float tabF[11];

    srand(time(NULL));

    // Remplissage
    for (int i = 0; i < 11; i++) {
        tabI[i] = rand() % 150;
        tabF[i] = (rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < 11; i++) printf("%d ", tabI[i]);

    printf("\n\nTableau flottants (avant) :\n");
    for (int i = 0; i < 11; i++) printf("%.2f ", tabF[i]);

    // Traitement via pointeurs
    int *pi = tabI;
    float *pf = tabF;

    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            *(pi + i) *= 3;
            *(pf + i) *= 3;
        }
    }

    printf("\n\nTableau d'entiers (après) :\n");
    for (int i = 0; i < 11; i++) printf("%d ", tabI[i]);

    printf("\n\nTableau flottants (après) :\n");
    for (int i = 0; i < 11; i++) printf("%.2f ", tabF[i]);

    printf("\n");
    return 0;
}

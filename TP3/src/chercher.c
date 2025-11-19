#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int t[100];
    int i, x;
    int trouve = 0;

    srand(time(NULL));

    printf("Tableau :\n");
    for(i = 0; i < 100; i++) {
        t[i] = rand() % 200 - 100;
        printf("%d ", t[i]);
    }

    printf("\n\nEntrez l'entier à chercher : ");
    scanf("%d", &x);

    for(i = 0; i < 100; i++) {
        if(t[i] == x) {
            trouve = 1;
            break;
        }
    }

    if(trouve)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}

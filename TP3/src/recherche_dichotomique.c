#include <stdio.h>

int main() {

    int t[100];
    int i;
    for(i = 0; i < 100; i++)
        t[i] = i;  // tableau trié simple

    printf("Tableau trié :\n");
    for(i = 0; i < 100; i++)
        printf("%d ", t[i]);

    int x;
    printf("\n\nEntrez l'entier à chercher : ");
    scanf("%d", &x);

    int gauche = 0, droite = 99, milieu;
    int trouve = 0;

    while(gauche <= droite) {
        milieu = (gauche + droite) / 2;

        if(t[milieu] == x) {
            trouve = 1;
            break;
        }
        else if(t[milieu] < x)
            gauche = milieu + 1;
        else
            droite = milieu - 1;
    }

    if(trouve)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}

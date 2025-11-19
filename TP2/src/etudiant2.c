#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float noteC;
    float noteSE;
};

int main(void) {
    struct Etudiant etu[5];

    strcpy(etu[0].nom, "Dupont");
    strcpy(etu[0].prenom, "Marie");
    strcpy(etu[0].adresse, "20 boulevard A");
    etu[0].noteC = 16.5;
    etu[0].noteSE = 12.1;

    strcpy(etu[1].nom, "Martin");
    strcpy(etu[1].prenom, "Pierre");
    strcpy(etu[1].adresse, "22 boulevard B");
    etu[1].noteC = 14.0;
    etu[1].noteSE = 14.1;

    // Ajout simple pour arriver à 5 étudiants
    for (int i = 2; i < 5; i++) {
        strcpy(etu[i].nom, "NomTest");
        strcpy(etu[i].prenom, "PrenomTest");
        strcpy(etu[i].adresse, "Adresse Test");
        etu[i].noteC = 10 + i;
        etu[i].noteSE = 11 + i;
    }

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i+1);
        printf("Nom : %s\n", etu[i].nom);
        printf("Prénom : %s\n", etu[i].prenom);
        printf("Adresse : %s\n", etu[i].adresse);
        printf("Note C : %.2f\n", etu[i].noteC);
        printf("Note SE : %.2f\n\n", etu[i].noteSE);
    }

    return 0;
}

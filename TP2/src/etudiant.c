#include <stdio.h>

int main(void) {
    char nom[5][50] = {"Dupont", "Martin", "Durand", "Leroy", "Bernard"};
    char prenom[5][50] = {"Marie", "Paul", "Alice", "Hugo", "Emma"};
    char adresse[5][100] = {
        "10 rue Alpha",
        "20 avenue Beta",
        "55 boulevard Gamma",
        "12 rue Delta",
        "99 avenue Omega"
    };

    float noteC[5] = {15.5, 14.0, 12.0, 18.0, 13.5};
    float noteSE[5] = {12.0, 13.5, 17.0, 11.0, 19.5};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : %s\n", nom[i]);
        printf("Prénom : %s\n", prenom[i]);
        printf("Adresse : %s\n", adresse[i]);
        printf("Note C : %.2f\n", noteC[i]);
        printf("Note SE : %.2f\n\n", noteSE[i]);
    }

    return 0;
}

#include <stdio.h>

int main(void) {
    char ch1[100] = "Hello";
    char ch2[100] = " World!";
    char copie[100];
    char concat[200];

    int i = 0, j = 0;

    // Longueur
    while (ch1[i] != '\0') i++;
    printf("Longueur de \"%s\" : %d\n", ch1, i);

    // Copie
    i = 0;
    while (ch1[i] != '\0') {
        copie[i] = ch1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Copie : %s\n", copie);

    // Concat
    i = 0;
    while (ch1[i] != '\0') {
        concat[i] = ch1[i];
        i++;
    }
    j = 0;
    while (ch2[j] != '\0') {
        concat[i] = ch2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}

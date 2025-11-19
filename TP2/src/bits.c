#include <stdio.h>

int main(void) {
    unsigned int d = 0xF00F0000;  // valeur test modifiable

    int bit4gauche  = (d >> 28) & 1;
    int bit20gauche = (d >> 12) & 1;

    if (bit4gauche == 1 && bit20gauche == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}

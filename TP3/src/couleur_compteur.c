#include <stdio.h>

struct Couleur {
    unsigned char r, g, b, a;
};

int main() {

    struct Couleur t[100];
    struct Couleur distinctes[100];
    int compte[100];
    int nb_distinctes = 0;

    for(int i = 0; i < 100; i++) {
        t[i].r = rand() % 256;
        t[i].g = rand() % 256;
        t[i].b = rand() % 256;
        t[i].a = 255;
    }

    for(int i = 0; i < 100; i++) {
        int existe = -1;

        for(int j = 0; j < nb_distinctes; j++) {
            if(t[i].r == distinctes[j].r &&
               t[i].g == distinctes[j].g &&
               t[i].b == distinctes[j].b &&
               t[i].a == distinctes[j].a) {
                existe = j;
                break;
            }
        }

        if(existe == -1) {
            distinctes[nb_distinctes] = t[i];
            compte[nb_distinctes] = 1;
            nb_distinctes++;
        }  
        else {
            compte[existe]++;
        }
    }

    for(int i = 0; i < nb_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
                distinctes[i].r,
                distinctes[i].g,
                distinctes[i].b,
                distinctes[i].a,
                compte[i]);
    }

    return 0;
}

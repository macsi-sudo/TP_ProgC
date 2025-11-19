#include <stdio.h>

int main(void) {
    char c = 'A';
    short s = 123;
    int i = 456;
    long l = 789;
    long long ll = 987654321;
    float f = 1.5f;
    double d = 3.14159;
    long double ld = 2.718281828;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant manipulation :\n");
    printf("Adresse de i = %p, valeur = %x\n", (void*)pi, i);
    printf("Adresse de f = %p, valeur = %x\n\n", (void*)pf, *(unsigned int*)pf);

    // Manipulation
    *pi = *pi - 1;
    *(unsigned int*)pf = 0x3f800000; // 1.0 en IEEE 754

    printf("Après manipulation :\n");
    printf("Adresse de i = %p, valeur = %x\n", (void*)pi, i);
    printf("Adresse de f = %p, valeur = %x\n", (void*)pf, *(unsigned int*)pf);

    return 0;
}

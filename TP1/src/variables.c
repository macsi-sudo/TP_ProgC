#include <stdio.h>

int main() {
    // Déclaration et affectation des variables de types de base

    // char
    signed char c1 = -100;
    unsigned char c2 = 200;
    char c3 = 'A'; // caractère

    // short
    signed short s1 = -15000;
    unsigned short s2 = 45000;

    // int
    signed int i1 = -100000;
    unsigned int i2 = 300000U;

    // long int
    signed long int l1 = -2000000000L;
    unsigned long int l2 = 4000000000UL;

    // long long int
    signed long long int ll1 = -9000000000000000000LL;
    unsigned long long int ll2 = 18000000000000000000ULL;

    // float
    float f = 3.14f;

    // double
    double d = 2.718281828;

    // long double
    long double ld = 1.6180339887L;

    // Affichage des valeurs
    printf("=== Affichage des variables de types de base ===\n\n");

    printf("signed char c1 = %d\n", c1);
    printf("unsigned char c2 = %u\n", c2);
    printf("char c3 = %c\n\n", c3);

    printf("signed short s1 = %d\n", s1);
    printf("unsigned short s2 = %u\n\n", s2);

    printf("signed int i1 = %d\n", i1);
    printf("unsigned int i2 = %u\n\n", i2);

    printf("signed long int l1 = %ld\n", l1);
    printf("unsigned long int l2 = %lu\n\n", l2);

    printf("signed long long int ll1 = %lld\n", ll1);
    printf("unsigned long long int ll2 = %llu\n\n", ll2);

    printf("float f = %.2f\n", f);
    printf("double d = %.9f\n", d);
    printf("long double ld = %.10Lf\n", ld);

    return 0;
}

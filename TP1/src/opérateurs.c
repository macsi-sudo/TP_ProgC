#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    // Opérations arithmétiques
    int somme = a + b;
    int difference = a - b;
    int produit = a * b;
    int quotient = a / b;
    int reste = a % b;

    printf("=== Opérations arithmétiques ===\n");
    printf("a = %d, b = %d\n", a, b);
    printf("Somme (a + b) = %d\n", somme);
    printf("Différence (a - b) = %d\n", difference);
    printf("Produit (a * b) = %d\n", produit);
    printf("Quotient (a / b) = %d\n", quotient);
    printf("Reste (a %% b) = %d\n\n", reste);

    // Opérations logiques et comparaisons
    printf("=== Comparaisons logiques ===\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n\n", a <= b);

    // Combinaisons logiques
    printf("=== Opérations logiques combinées ===\n");
    printf("(a > 0 && b > 0) : %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b < 0) : %d\n", (a > 0 || b < 0));
    printf("!(a == b) : %d\n", !(a == b));

    return 0;
}

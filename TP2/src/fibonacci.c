#include <stdio.h>

int main(void) {
    int n;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    printf("%d ", a);
    if (n >= 1) printf("%d ", b);

    for (int i = 2; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}

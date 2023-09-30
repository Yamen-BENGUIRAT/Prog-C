#include <stdio.h>

int main() {
    int n;

    printf("Nombre de termes pour la suite de Fibonacci : ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    printf("Suite de Fibonacci :\n");
    printf("%d\n%d\n", a, b);

    for (int i = 2; i < n; i++) {
        int next = a + b;
        printf("%d\n", next);

        a = b;
        b = next;
    }

    return 0;
}

#include <stdio.h>

int main() {
    printf("Nombres divisibles par 2 et 15 simultanément :\n");
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0 && i % 15 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("\nNombres divisibles par 103 ou 107 :\n");
    for (int i = 1; i <= 1000; i++) {
        if (i % 103 == 0 || i % 107 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("\nNombres divisibles par 7 ou 5, mais non divisibles par 3 :\n");
    for (int i = 1; i <= 1000; i++) {
        if ((i % 7 == 0 || i % 5 == 0) && i % 3 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


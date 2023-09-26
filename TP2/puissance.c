#include <stdio.h>

int main() {
    int a = 2;  
    int b = 4;

    int result = 1;

    for (int i = 0; i < b; i++) {
        result *= a;
    }

    printf("Le résultat de %d élevé à la puissance %d est : %d\n", a, b, result);

    return 0;
}
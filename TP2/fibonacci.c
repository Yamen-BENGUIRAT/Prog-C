#include <stdio.h>

int main() {
    int n;

    // Demandez à l'utilisateur le nombre de termes à générer
    printf("Nombre de termes pour la suite de Fibonacci : ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    // Affiche les deux premiers termes de la suite de Fibonacci (U0 et U1)
    printf("Suite de Fibonacci :\n");
    printf("%d\n%d\n", a, b);

    // Calcule et affiche les termes suivants de la suite de Fibonacci
    for (int i = 2; i < n; i++) {
        int next = a + b;
        printf("%d\n", next);

        // Met à jour les valeurs de a et b pour la prochaine itération
        a = b;
        b = next;
    }

    return 0;
}

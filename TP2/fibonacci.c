#include <stdio.h>

int main() {
    int n;

    // Demandez à l'utilisateur de saisir le nombre de termes à générer
    printf("Entrez le nombre de termes de la suite de Fibonacci à générer : ");
    scanf("%d", &n);

    // Déclarez les premiers deux termes de la suite
    int terme_precedent = 0;
    int terme_actuel = 1;

    // Affichez les deux premiers termes de la suite
    printf("Suite de Fibonacci jusqu'à U%d : %d, %d", n, terme_precedent, terme_actuel);

    // Calcul des termes suivants de la suite et affichage
    for (int i = 2; i < n; i++) {
        int terme_suivant = terme_precedent + terme_actuel;
        printf(", %d", terme_suivant);

        // Mettez à jour les termes précédents
        terme_precedent = terme_actuel;
        terme_actuel = terme_suivant;
    }

    printf("\n");

    return 0;
}

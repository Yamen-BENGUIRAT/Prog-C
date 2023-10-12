/*Yamen BEN GUIRAT et Enzo TULISSI.
27/09/23
Programme qui consiste à vérifier si les 4ème et 20ème bits de gauche d'une variable entière d sont à 1 en représentation binaire. Si les deux bits sont 1, le programme doit afficher 1 ; sinon, il doit afficher 0.qui génère et affiche les n termes de la suite de Fibonacci.
*/


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

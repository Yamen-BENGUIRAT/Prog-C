/*
Yamen BEN GUIRAT et Enzo TULISSI.
04/10/23
Programme qui consiste à déterminer la présence ou non d'un nombre dans un tableau de 100 entiers crée aléatoirement. 
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialise le générateur de nombres aléatoires avec une graine basée sur l'horloge
    srand(time(NULL));

    // Crée un tableau de 100 entiers et remplit-le de valeurs aléatoires
    int tableau[100];
    for (int i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000;
    }

    // Affiche le tableau initial
    printf("Tableau :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Demande à l'utilisateur d'entrer l'entier à chercher
    int entier_a_chercher;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier_a_chercher);

    // Effectue la recherche dans le tableau
    int entier_present = 0; // Variable pour indiquer si l'entier est présent (initialisée à 0, c'est-à-dire absent)
    for (int i = 0; i < 100; i++) {
        if (tableau[i] == entier_a_chercher) {
            entier_present = 1; // L'entier est présent
            break; // Sort de la boucle dès qu'il est trouvé
        }
    }

    // Affiche le résultat
    if (entier_present) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}

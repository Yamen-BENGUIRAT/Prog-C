#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction pour effectuer une recherche dichotomique dans un tableau trié
int recherche_dichotomique(int tableau[], int taille, int entier_recherche) {
    int gauche = 0;
    int droite = taille - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        // Si l'entier recherché est au milieu du tableau
        if (tableau[milieu] == entier_recherche) {
            return 1; // Entier présent
        }

        // Si l'entier recherché est plus petit, recherche dans la moitié gauche
        if (tableau[milieu] > entier_recherche) {
            droite = milieu - 1;
        }
        // Si l'entier recherché est plus grand, recherche dans la moitié droite
        else {
            gauche = milieu + 1;
        }
    }

    return 0; // Entier absent
}

int main() {
    // Initialise le générateur de nombres aléatoires avec une graine basée sur l'horloge
    srand(time(NULL));

    // Crée un tableau trié de 100 entiers
    int tableau[100];
    for (int i = 0; i < 100; i++) {
        tableau[i] = i * 2; // Remplit le tableau avec des valeurs paires
    }

    // Affiche le tableau trié
    printf("Tableau trié :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Demande à l'utilisateur d'entrer l'entier à rechercher
    int entier_recherche;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier_recherche);

    // Effectue une recherche dichotomique dans le tableau trié
    int resultat = recherche_dichotomique(tableau, 100, entier_recherche);

    // Affiche le résultat de la recherche
    if (resultat) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}

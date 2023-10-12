/* 
Yamen BEN GUIRAT et Enzo TULISSI.
04/10/23
Programme qui consiste à trier les éléments d'un tableau en utilisant le tri à bulles.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction pour échanger deux éléments d'un tableau
void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction pour trier un tableau d'entiers par ordre croissant (tri à bulles)
void tri_a_bulles(int tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                echanger(&tableau[j], &tableau[j + 1]);
            }
        }
    }
}

int main() {
    // Initialise le générateur de nombres aléatoires avec une graine basée sur l'horloge
    srand(time(NULL));

    // Crée un tableau de 100 entiers et remplit-le de valeurs aléatoires
    int tableau[100];
    for (int i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000;
    }

    // Affiche le tableau initial non trié
    printf("Tableau non trié :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Trie le tableau par ordre croissant en utilisant le tri à bulles
    tri_a_bulles(tableau, 100);

    // Affiche le tableau trié par ordre croissant
    printf("Tableau trié par ordre croissant :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}

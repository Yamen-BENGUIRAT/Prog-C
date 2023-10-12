#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 11 // Taille des tableaux

// Fonction pour remplir un tableau d'entiers avec des valeurs aléatoires
void remplirTableauInt(int *tableau) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        tableau[i] = rand() % 101; // Génère des nombres aléatoires entre 0 et 100
    }
}

// Fonction pour remplir un tableau de nombres à virgule flottante avec des valeurs aléatoires
void remplirTableauFloat(float *tableau) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        tableau[i] = (float)rand() / RAND_MAX * 10.0; // Génère des nombres aléatoires entre 0 et 10.0
    }
}

// Fonction pour afficher un tableau d'entiers
void afficherTableauInt(int *tableau) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d", tableau[i]);
        if (i < ARRAY_SIZE - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

// Fonction pour afficher un tableau de nombres à virgule flottante
void afficherTableauFloat(float *tableau) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%.2f", tableau[i]);
        if (i < ARRAY_SIZE - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    // Initialisation de la graine du générateur de nombres aléatoires
    srand(time(NULL));

    // Déclaration et allocation des tableaux d'entiers et de nombres à virgule flottante
    int tableauInt[ARRAY_SIZE];
    float tableauFloat[ARRAY_SIZE];

    // Remplissage des tableaux avec des valeurs aléatoires
    remplirTableauInt(tableauInt);
    remplirTableauFloat(tableauFloat);

    // Affichage des tableaux avant la multiplication par 3
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    afficherTableauInt(tableauInt);

    printf("\nTableau de nombres à virgule flottante (avant la multiplication par 3) :\n");
    afficherTableauFloat(tableauFloat);

    // Multiplication par 3 des valeurs dont l'indice est divisible par 2 en utilisant des pointeurs
    for (int i = 0; i < ARRAY_SIZE; i += 2) {
        tableauInt[i] *= 3;
        tableauFloat[i] *= 3;
    }

    // Affichage des tableaux après la multiplication par 3
    printf("\nTableau d'entiers (après la multiplication par 3) :\n");
    afficherTableauInt(tableauInt);

    printf("\nTableau de nombres à virgule flottante (après la multiplication par 3) :\n");
    afficherTableauFloat(tableauFloat);

    return 0;
}

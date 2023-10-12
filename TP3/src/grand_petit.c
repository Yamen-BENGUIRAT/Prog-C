#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialise le générateur de nombres aléatoires avec une graine basée sur l'horloge
    srand(time(NULL));

    // Crée un tableau de 100 entiers et initialise le plus petit et le plus grand
    int tableau[100];
    int plus_petit = 1001;  // Supérieur à la plage de valeurs possibles (1-1000)
    int plus_grand = 0;     // Inférieur à la plage de valeurs possibles (1-1000)

    // Remplit le tableau avec des valeurs aléatoires entre 1 et 1000
    for (int i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
        
        // Vérifie si la nouvelle valeur est plus petite que l'actuelle plus_petit
        if (tableau[i] < plus_petit) {
            plus_petit = tableau[i];
        }

        // Vérifie si la nouvelle valeur est plus grande que l'actuel plus_grand
        if (tableau[i] > plus_grand) {
            plus_grand = tableau[i];
        }
    }

    // Affiche le numéro le plus petit et le numéro le plus grand
    printf("Le numéro le plus petit est : %d\n", plus_petit);
    printf("Le numéro le plus grand est : %d\n", plus_grand);

    return 0;
}

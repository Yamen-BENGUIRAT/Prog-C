#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 10};

    for (int i = 0; i < sizeof(nombres) / sizeof(nombres[0]); i++) {
        int nombre = nombres[i];
        int bits[32]; // Tableau pour stocker les bits

        // Initialisation du tableau bits à 0
        for (int j = 0; j < 32; j++) {
            bits[j] = 0;
        }

        int index = 31; // Commencer par le bit le plus significatif (MSB)

        // Conversion en binaire
        while (nombre > 0) {
            bits[index] = nombre % 2;
            nombre = nombre / 2;
            index--;
        }

        // Affichage de la représentation binaire
        printf("Nombre : %d (binaire) = ", nombres[i]);
        for (int j = 0; j < 32; j++) {
            printf("%d", bits[j]);
            if (j % 4 == 3) {
                printf(" "); // Ajouter un espace chaque 4 bits pour une meilleure lisibilité
            }
        }
        printf("\n");
    }

    return 0;
}

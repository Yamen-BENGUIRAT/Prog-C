#include <stdio.h>

void afficherBinaire(int nombre) {
    int bits[32]; // Pour stocker les bits du nombre binaire
    int i;

    // Initialisation du tableau bits à zéro
    for (i = 0; i < 32; i++) {
        bits[i] = 0;
    }

    // Conversion du nombre en binaire en utilisant la division par 2 et le reste de division
    for (i = 0; nombre > 0; i++) {
        bits[i] = nombre % 2;
        nombre = nombre / 2;
    }

    // Affichage de la représentation binaire à l'envers (du bit de poids faible au bit de poids fort)
    printf("Représentation binaire : ");
    for (i = 31; i >= 0; i--) {
        printf("%d", bits[i]);
    }
    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};

    for (int i = 0; i < sizeof(nombres) / sizeof(nombres[0]); i++) {
        printf("Nombre décimal : %d\n", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}

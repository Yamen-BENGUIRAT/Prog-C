/*Yamen BEN GUIRAT et Enzo TULISSI.
27/09/23
Programme qui consiste à représenter des couleurs au format RGBA en utilisant des structures.
*/


#include <stdio.h>

// Définissez une structure pour représenter une couleur RGBA
struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main() {
    // Créez un tableau de 10 couleurs
    struct Couleur couleurs[10];

    // Initialisez les couleurs en utilisant la notation hexadécimale
    couleurs[0] = (struct Couleur){0xef, 0x78, 0x12, 0xff};
    couleurs[1] = (struct Couleur){0x2c, 0xc8, 0x64, 0xff};
    couleurs[2] = (struct Couleur){0x00, 0x00, 0xff, 0xff};
    couleurs[3] = (struct Couleur){0xff, 0x00, 0x00, 0xff};
    couleurs[4] = (struct Couleur){0x00, 0xff, 0x00, 0xff};
    couleurs[5] = (struct Couleur){0xff, 0xff, 0x00, 0xff};
    couleurs[6] = (struct Couleur){0xff, 0x00, 0xff, 0xff};
    couleurs[7] = (struct Couleur){0x80, 0x80, 0x80, 0xff};
    couleurs[8] = (struct Couleur){0xff, 0xff, 0xff, 0xff};
    couleurs[9] = (struct Couleur){0x00, 0x00, 0x00, 0xff};

    // Affichez les détails des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].rouge);
        printf("Vert : %d\n", couleurs[i].vert);
        printf("Bleu : %d\n", couleurs[i].bleu);
        printf("Alpha : %d\n", couleurs[i].alpha);
        printf("\n");
    }

    return 0;
}

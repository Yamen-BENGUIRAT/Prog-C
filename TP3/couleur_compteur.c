#include <stdio.h>
#include <stdint.h>

// Structure pour représenter une couleur RGBA
struct Couleur {
    uint8_t R;
    uint8_t G;
    uint8_t B;
    uint8_t A;
};

int main() {
    // Tableau de 100 couleurs
    struct Couleur couleurs[100];

    // Remplir le tableau avec des couleurs (à titre d'exemple)
    couleurs[0] = (struct Couleur){0xFF, 0x23, 0x23, 0x45};
    couleurs[1] = (struct Couleur){0xFF, 0x00, 0x23, 0x12};
    couleurs[2] = (struct Couleur){0xFF, 0x23, 0x23, 0x45};
    // ... Remplir les autres couleurs ...

    // Structure pour stocker les couleurs distinctes et leur nombre d'occurrences
    struct CouleurOccurrence {
        struct Couleur couleur;
        int occurrence;
    };

    // Tableau de couleurs distinctes
    struct CouleurOccurrence couleurs_distinctes[100];
    int nb_couleurs_distinctes = 0;

    // Parcours du tableau de couleurs
    for (int i = 0; i < 100; i++) {
        int couleur_deja_presente = 0;

        // Recherche de la couleur dans le tableau de couleurs distinctes
        for (int j = 0; j < nb_couleurs_distinctes; j++) {
            if (couleurs[i].R == couleurs_distinctes[j].couleur.R &&
                couleurs[i].G == couleurs_distinctes[j].couleur.G &&
                couleurs[i].B == couleurs_distinctes[j].couleur.B &&
                couleurs[i].A == couleurs_distinctes[j].couleur.A) {
                couleur_deja_presente = 1;
                couleurs_distinctes[j].occurrence++;
                break;
            }
        }

        // Si la couleur n'est pas déjà présente, l'ajouter au tableau de couleurs distinctes
        if (!couleur_deja_presente) {
            couleurs_distinctes[nb_couleurs_distinctes].couleur = couleurs[i];
            couleurs_distinctes[nb_couleurs_distinctes].occurrence = 1;
            nb_couleurs_distinctes++;
        }
    }

    // Affichage des couleurs distinctes et de leur nombre d'occurrences
    for (int i = 0; i < nb_couleurs_distinctes; i++) {
        printf("Couleur : %02x %02x %02x %02x : %d\n",
               couleurs_distinctes[i].couleur.R, couleurs_distinctes[i].couleur.G,
               couleurs_distinctes[i].couleur.B, couleurs_distinctes[i].couleur.A,
               couleurs_distinctes[i].occurrence);
    }

    return 0;
}

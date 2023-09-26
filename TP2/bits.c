#include <stdio.h>

int main() {
    // Déclarez une variable entière d et initialisez-la avec la valeur pour laquelle vous souhaitez vérifier les bits.
    int d = 0x12345678;  // Changez cette valeur selon vos besoins

    // Utilisez des opérations de manipulation de bits pour extraire les 4ème et 20ème bits de gauche de la variable d.
    // Vous pouvez utiliser des opérateurs de décalage et des opérations de masquage.
    int mask4thBit = 1 << 3;   // Créez un masque pour le 4ème bit en partant de la droite (0-indexed)
    int mask20thBit = 1 << 19; // Créez un masque pour le 20ème bit en partant de la droite (0-indexed)

    // Vérifiez si les deux bits extraits sont égaux à 1.
    int is4thBitSet = (d & mask4thBit) != 0;
    int is20thBitSet = (d & mask20thBit) != 0;

    // Affichez le résultat de la vérification à l'écran en utilisant la fonction printf.
    // Vous devez afficher 1 si les bits sont égaux à 1 et 0 sinon.
    if (is4thBitSet && is20thBitSet) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

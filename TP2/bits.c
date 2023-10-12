#include <stdio.h>

int main() {
    // Déclarez une variable entière d et initialisez-la avec la valeur de votre choix
    int d = 0b10000000000000000000; // Exemple : 20ème bit à 1, 4ème bit à 0

    // Utilisez des opérations de manipulation de bits pour extraire les bits
    int bit4 = (d >> 3) & 1; // Extraction du 4ème bit (décalage de 3 bits vers la droite)
    int bit20 = (d >> 19) & 1; // Extraction du 20ème bit (décalage de 19 bits vers la droite)

    // Vérifiez si les deux bits extraits sont égaux à 1
    int resultat = (bit4 == 1 && bit20 == 1);

    // Affichez le résultat
    printf("4ème bit = %d, 20ème bit = %d, Résultat = %d\n", bit4, bit20, resultat);

    return 0;
}

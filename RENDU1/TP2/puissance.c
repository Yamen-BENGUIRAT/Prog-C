/*
Yamen BEN GUIRAT et Enzo TULISSI.
27/09/23
Programme qui consiste à déterminer la velur d'un nombre a à la puissance b
*/


#include <stdio.h>

int main() {
    // Déclarez les variables pour a, b et le résultat
    int a = 2; // Remplacez par la valeur de votre choix
    int b = 2; // Remplacez par la valeur de votre choix
    int resultat = 1; // Initialisez le résultat à 1

    // Vérifiez si b est négatif
    if (b < 0) {
        printf("Erreur : La puissance doit être un entier positif ou nul.\n");
        return 1; // Sortez du programme avec un code d'erreur
    }

    // Calcul de la puissance en multipliant a par lui-même b fois
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Affichez le résultat
    printf("%d^%d = %d\n", a, b, resultat);

    return 0; // Terminez le programme avec succès
}

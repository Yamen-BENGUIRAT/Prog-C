/*Yamen BEN GUIRAT et Enzo TULISSI.
27/09/23
Programme qui stocke les données d'étudiants dans un tableau en utilisant des structures.
*/


#include <stdio.h>
#include <string.h> // Pour la fonction strcpy

// Définissez une structure pour représenter les informations d'un étudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_programmation;
    float note_systeme_exploitation;
};

int main() {
    // Créez un tableau de 5 étudiants
    struct Etudiant etudiants[5];

    // Saisissez les détails de chaque étudiant
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        printf("Prénom : ");
        scanf("%s", etudiants[i].prenom);
        printf("Adresse : ");
        scanf("%s", etudiants[i].adresse);
        printf("Note en Programmation en C : ");
        scanf("%f", &etudiants[i].note_programmation);
        printf("Note en Système d'exploitation : ");
        scanf("%f", &etudiants[i].note_systeme_exploitation);
    }

    // Affichez les détails de chaque étudiant
    printf("\nDétails des étudiant.e.s :\n");
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note en Programmation en C : %.2f\n", etudiants[i].note_programmation);
        printf("Note en Système d'exploitation : %.2f\n", etudiants[i].note_systeme_exploitation);
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Déclarez les tableaux pour les noms, prénoms, adresses et notes
    char noms[5][50];
    char prenoms[5][50];
    char adresses[5][100];
    float notes_programmation[5];
    float notes_systeme_exploitation[5];

    // Remplissez les tableaux avec les informations des étudiants
    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", noms[i]);
        printf("Prénom : ");
        scanf("%s", prenoms[i]);
        printf("Adresse : ");
        scanf("%s", adresses[i]);
        printf("Note en Programmation en C : ");
        scanf("%f", &notes_programmation[i]);
        printf("Note en Système d'exploitation : ");
        scanf("%f", &notes_systeme_exploitation[i]);
    }

    // Affichez les détails de chaque étudiant
    printf("\nDétails des étudiants :\n");
    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation en C : %.2f\n", notes_programmation[i]);
        printf("Note en Système d'exploitation : %.2f\n", notes_systeme_exploitation[i]);
        printf("\n");
    }

    return 0;
}

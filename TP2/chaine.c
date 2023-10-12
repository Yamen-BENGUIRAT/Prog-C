#include <stdio.h>

// Fonction pour calculer la longueur d'une chaîne
int calculerLongueur(const char *chaine) {
    int longueur = 0;
    while (chaine[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

// Fonction pour copier une chaîne source dans une chaîne destination
void copierChaine(char *destination, const char *source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // N'oubliez pas d'ajouter le caractère nul à la fin
}

// Fonction pour concaténer deux chaînes
void concatenationChaine(char *destination, const char *ajout) {
    int longueur_dest = calculerLongueur(destination);
    int i = 0;
    while (ajout[i] != '\0') {
        destination[longueur_dest + i] = ajout[i];
        i++;
    }
    destination[longueur_dest + i] = '\0'; // N'oubliez pas d'ajouter le caractère nul à la fin
}

int main() {
    char chaine1[100]; // Déclarer la première chaîne
    char chaine2[100]; // Déclarer la deuxième chaîne
    char resultat[200]; // Déclarer une chaîne pour le résultat (assez grande pour les deux chaînes)

    // Demander à l'utilisateur de saisir les deux chaînes
    printf("Entrez la première chaîne : ");
    scanf("%s", chaine1);
    printf("Entrez la deuxième chaîne : ");
    scanf("%s", chaine2);

    // Calculer la longueur de la première chaîne
    int longueur1 = calculerLongueur(chaine1);
    printf("Longueur de la première chaîne : %d\n", longueur1);

    // Copier la première chaîne dans une autre
    copierChaine(resultat, chaine1);
    printf("Copie de la première chaîne : %s\n", resultat);

    // Concaténer les deux chaînes
    concatenationChaine(resultat, chaine2);
    printf("Concaténation des deux chaînes : %s\n", resultat);

    return 0;
}

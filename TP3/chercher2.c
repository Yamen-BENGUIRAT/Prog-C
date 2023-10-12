#include <stdio.h>
#include <string.h>

int main() {
    // Tableau de 10 phrases
    char phrases[10][100] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    // Phrase à rechercher
    char phrase_recherche[100];
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    fgets(phrase_recherche, sizeof(phrase_recherche), stdin);
    phrase_recherche[strlen(phrase_recherche) - 1] = '\0'; // Supprimer le retour à la ligne

    // Variable pour indiquer si la phrase a été trouvée
    int phrase_trouvee = 0;

    // Parcours du tableau de phrases
    for (int i = 0; i < 10; i++) {
        if (strcmp(phrase_recherche, phrases[i]) == 0) {
            phrase_trouvee = 1;
            break; // Sort de la boucle si la phrase est trouvée
        }
    }

    // Affichage du résultat
    if (phrase_trouvee) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}


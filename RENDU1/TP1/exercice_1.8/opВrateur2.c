/*
Yamen BEN GUIRAT et Enzo TULISSI.
20/09/23
Programme qui consiste à effectuer des opérations entre des variables en utlisant la structure switch.
*/




#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Demandez à l'utilisateur de saisir num1, num2 et op
    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'opérateur (+, -, *, /, %, &, |, ~) : ");
    scanf(" %c", &op); // Notez l'espace avant %c pour ignorer les espaces blancs

    // Utilisation de la structure switch pour déterminer l'opération à effectuer
    switch (op) {
        case '+':
            printf("Résultat : %d\n", num1 + num2);
            break;
        case '-':
            printf("Résultat : %d\n", num1 - num2);
            break;
        case '*':
            printf("Résultat : %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Résultat : %.2f\n", (float)num1 / num2);
            } else {
                printf("Erreur : Division par zéro.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Résultat : %d\n", num1 % num2);
            } else {
                printf("Erreur : Division par zéro.\n");
            }
            break;
        case '&':
            printf("Résultat : %d\n", num1 & num2);
            break;
        case '|':
            printf("Résultat : %d\n", num1 | num2);
            break;
        case '~':
            printf("Résultat : %d\n", ~num1);
            break;
        default:
            printf("Opérateur non valide.\n");
            break;
    }

    return 0;
}

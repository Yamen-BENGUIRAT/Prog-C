#include "operator.h"

void somme(int num1, int num2) {
    printf("Résultat de la somme : %d\n", num1 + num2);
}

void difference(int num1, int num2) {
    printf("Résultat de la différence : %d\n", num1 - num2);
}

void produit(int num1, int num2) {
    printf("Résultat du produit : %d\n", num1 * num2);
}

void quotient(int num1, int num2) {
    if (num2 != 0) {
        printf("Résultat du quotient : %d\n", num1 / num2);
    } else {
        printf("Erreur : division par zéro.\n");
    }
}

void modulo(int num1, int num2) {
    if (num2 != 0) {
        printf("Résultat du modulo : %d\n", num1 % num2);
    } else {
        printf("Erreur : division par zéro.\n");
    }
}

void et(int num1, int num2) {
    printf("Résultat de l'opération ET : %d\n", num1 & num2);
}

void ou(int num1, int num2) {
    printf("Résultat de l'opération OU : %d\n", num1 | num2);
}

void negation(int num1) {
    printf("Résultat de la négation : %d\n", ~num1);
}

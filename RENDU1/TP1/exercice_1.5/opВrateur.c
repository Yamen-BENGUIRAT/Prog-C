/*
Yamen BEN GUIRAT et Enzo TULISSI.
20/09/23
Programme qui consiste à effectuer des opérations entre deux variables.
*/



#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Addition de a et b
    int addition = a + b;
    printf("a + b = %d\n", addition);

    // Soustraction de b à partir de a
    int soustraction = a - b;
    printf("a - b = %d\n", soustraction);

    // Multiplication de a par b
    int multiplication = a * b;
    printf("a * b = %d\n", multiplication);

    // Division de a par b
    float division = (float)a / b; // On s'assure de la conversion en float pour obtenir un résultat décimal
    printf("a / b = %f\n", division);

    // Calcul du reste de la division de a par b (modulo)
    int modulo = a % b;
    printf("a %% b = %d\n", modulo);

    // Vérification si a est égal à b
    int estEgal = (a == b);
    printf("a == b : %s\n", estEgal ? "true" : "false");

    // Vérification si a est supérieur à b
    int estSuperieur = (a > b);
    printf("a > b : %s\n", estSuperieur ? "true" : "false");

    return 0;
}

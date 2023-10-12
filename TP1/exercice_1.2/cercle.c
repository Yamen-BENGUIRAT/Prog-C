#include <stdio.h>
#include <math.h>

int main() {
    double rayon;
    double pi = M_PI; // Utilisation de la constante pi (π) de la bibliothèque math.h

    // Demandez à l'utilisateur de saisir le rayon du cercle
    printf("Veuillez entrer le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calculez l'aire du cercle
    double aire = pi * rayon * rayon;

    // Calculez le périmètre du cercle
    double perimetre = 2 * pi * rayon;

    // Affichez les valeurs calculées
    printf("L'aire du cercle est : %lf\n", aire);
    printf("Le perimetre du cercle est : %lf\n", perimetre);

    return 0;
}

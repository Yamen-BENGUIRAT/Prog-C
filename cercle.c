#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclure la bibliothèque mathématique pour accéder à la constante pi

int main()
{
    int rayon = 5;
    double Aire; // Déclarez une variable pour stocker l'aire du cercle
    double Perimetre;

    Aire = rayon*rayon*M_PI;
    Perimetre = 2*M_PI*rayon;

    printf("L'aire du cercle est :%lf\n",Aire); // Utilisez printf pour afficher la valeur de r
    printf("Le perimetre du cercle est :%lf\n", Perimetre);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char caractere = 'A';
    short petit = 5;
    int entier = 42;
    long int longEntier = 40000;
    float flottant = 3.14;
    double doublePrecision = 123.456;
    long longEntier = 1234567890;
    long long int longlongEntier = 200000000000
    long double longdouble = 3827748200203
    
    // Affichage des valeurs des variables
    printf("Valeur de l'entier : %d\n", entier);
    printf("Valeur du flottant : %f\n", flottant);
    printf("Valeur du caractère : %c\n", caractere);
    printf("Valeur du double : %lf\n", doublePrecision);
    printf("Valeur du long entier : %ld\n", longEntier); // Utilisation de %ld pour long int
    printf("Valeur du short : %d\n",petit );
    printf("Valeur du longlongentier : %ld\n", longlongEntier);
    printf("Valeur du double: %ld\n", longdouble);


    return 0;
}
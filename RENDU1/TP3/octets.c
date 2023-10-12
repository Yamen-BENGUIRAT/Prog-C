/*
Yamen BEN GUIRAT et Enzo TULISSI.
04/10/23
Programme qui consiste à déterminer la taille en octet des différents types de données en utilisant les opérateurs de pointeurs.
*/

#include <stdio.h>

int main() {
    // Déclaration de variables de différents types
    short s = 0x0302;            // Exemple de valeur pour short
    int i = 0x04030201;          // Exemple de valeur pour int
    long int li = 0x0807060504030201; // Exemple de valeur pour long int
    float f = 3.14159;           // Exemple de valeur pour float
    double d = 2.71828;          // Exemple de valeur pour double
    long double ld = 1.23456789; // Exemple de valeur pour long double

    // Affichage des octets de short
    printf("Octets de short :\n");
    for (size_t j = 0; j < sizeof(short); j++) {
        printf("%02x ", *((unsigned char*)&s + j));
    }
    printf("\n\n");

    // Affichage des octets de int
    printf("Octets de int :\n");
    for (size_t j = 0; j < sizeof(int); j++) {
        printf("%02x ", *((unsigned char*)&i + j));
    }
    printf("\n\n");

    // Affichage des octets de long int
    printf("Octets de long int :\n");
    for (size_t j = 0; j < sizeof(long int); j++) {
        printf("%02x ", *((unsigned char*)&li + j));
    }
    printf("\n\n");

    // Affichage des octets de float
    printf("Octets de float :\n");
    for (size_t j = 0; j < sizeof(float); j++) {
        printf("%02x ", *((unsigned char*)&f + j));
    }
    printf("\n\n");

    // Affichage des octets de double
    printf("Octets de double :\n");
    for (size_t j = 0; j < sizeof(double); j++) {
        printf("%02x ", *((unsigned char*)&d + j));
    }
    printf("\n\n");

    // Affichage des octets de long double
    printf("Octets de long double :\n");
    for (size_t j = 0; j < sizeof(long double); j++) {
        printf("%02x ", *((unsigned char*)&ld + j));
    }
    printf("\n\n");

    return 0;
}


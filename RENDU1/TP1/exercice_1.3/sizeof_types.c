/*
Yamen BEN GUIRAT et Enzo TULISSI.
20/09/23
Programme qui consiste à afficher la taille en octets des différents types de base.
*/



#include <stdio.h>

int main() {
    printf("Tailles des types de base en octets :\n");
    printf("1. char : %zu octets\n", sizeof(char));
    printf("2. short : %zu octets\n", sizeof(short));
    printf("3. int : %zu octets\n", sizeof(int));
    printf("4. long int : %zu octets\n", sizeof(long int));
    printf("5. long long int : %zu octets\n", sizeof(long long int));
    printf("6. float : %zu octets\n", sizeof(float));
    printf("7. double : %zu octets\n", sizeof(double));
    printf("8. long double : %zu octets\n", sizeof(long double));

    return 0;
}

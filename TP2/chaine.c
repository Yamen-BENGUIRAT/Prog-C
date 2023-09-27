#include <stdio.h>
#include <string.h>

int main() {
    
    int i;
    char tall[100];
    printf("Entrez une chaîne de caractères : ");
    scanf("%s", tall);

    int longueur = strlen(tall);
    printf("La chaine \"%s\" contient %d caractères. \n", tall,longueur);

    return 0;
}



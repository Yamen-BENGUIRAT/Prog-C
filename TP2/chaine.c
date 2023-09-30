#include <stdio.h>
#include <string.h>

int main() {
    
    int i;
    char tall[100];
    printf("Entrez une chaîne de caractères : ");
    scanf("%s", tall);

    int longueur = strlen(tall);
    printf("La chaine \"%s\" contient %d caractères. \n", tall,longueur);

    char a[100] = "okkkay";
    char b[100];
    printf("Entrez une chaîne de caractères :");
    scanf("%s", b);

    strncpy(a,b, sizeof(b));
    a[sizeof(b)-1] = '\0';

    printf("La chaîne a devient %s\n", a);





    return 0;






}




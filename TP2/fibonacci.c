#include <stdio.h>



int main() {


    int Un;
    int precedent = 0;
    int suivant = 1;
    int b;

    scanf("Nombre de termes pour la suite ?%d", &b);
    for (int n = 2; n <b; n++){

        Un = suivant + precedent;
        printf("%d\n",Un);

        precedent = suivant;
        suivant = Un;
    }

    return 0;
}
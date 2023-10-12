/*
Yamen BEN GUIRAT et Enzo TULISSI.
20/09/23
Programme qui consiste à afficher un triangle rectangle rempli de diez.
*/



#include <stdio.h>

int main() {
    int compteur = 8;

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}



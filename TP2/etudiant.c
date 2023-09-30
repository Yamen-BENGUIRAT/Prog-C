#include <stdio.h>


int main() {
    char name[2][12] = {
        {"Yamen", "BENGUIRAT"},
        {"Anass","BENGUIRAT" }
    };


    char address[2][20] = {
        {"Lyon","Laennec"},
        {"Grenoble","VilleVerte"}
    };


    float notesC[2][2] = {
        {12.5, 0},
        {11, 0}
    };


    float notesExploitation[2][2] = {
        {14, 0},
        {8.3, 0}
    };


    for (int i = 0; i < 2; i++) {
        printf("Élève %d:\n", i + 1);
        printf("Nom: %s %s\n", name[i][0], name[i][1]);
        printf("Adresse: %s, %s\n", address[i][0], address[i][1]);
        printf("Notes en C: %.2f, %.2f\n", notesC[i][0], notesC[i][1]);
        printf("Notes en Exploitation: %.2f, %.2f\n", notesExploitation[i][0], notesExploitation[i][1]);
        printf("\n");
    }

    return 0;


}


#include <stdio.h>
#include <stdlib.h>

int main()
{


    int compteur;
    for (compteur = 0; compteur <=1000; compteur++){

        if ( compteur%2==0 && compteur%15 ==0 ){
            printf("Ce nombre, %d est divisible par 2 et 15\n",compteur );
        }

        if ( compteur%103==0 || compteur%107==0){

            printf("Ce nombre, %d est divisble par 103 ou 107\n", compteur);
        }

        if (compteur%7== 0 && compteur%5==0 && compteur%3!=0 ){

            printf("Ce nombre, %d est divisble par 7, 5 mais pas 3\n", compteur);
        }

    }

    return 0;

}
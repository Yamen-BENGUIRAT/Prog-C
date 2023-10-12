#include <stdio.h>
#include "operator.h"

int main() {
    int num1, num2;
    char op;

    printf("Entrez num1, num2 et l'opérateur (+, -, *, /, %, &, |, ~) séparés par des espaces : ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            somme(num1, num2);
            break;
        case '-':
            difference(num1, num2);
            break;
        case '*':
            produit(num1, num2);
            break;
        case '/':
            quotient(num1, num2);
            break;
        case '%':
            modulo(num1, num2);
            break;
        case '&':
            et(num1, num2);
            break;
        case '|':
            ou(num1, num2);
            break;
        case '~':
            negation(num1);
            break;
        default:
            printf("Opérateur non reconnu.\n");
    }

    return 0;
}
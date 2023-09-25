#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num1 = 6;
    int num2 = 8;
    char num3;

    switch (num3){
        case '+' : printf ("%d", num1+num2);
        break;
        case '-' : printf ("%d", num1-num2);
        break;
        case '*' : printf ("%d", num1*num2);
        break;
        case '&' : printf ("%d", num1&num2);
        break;
        case '|' : printf ("%d", num1|num2);
        break;
        case '/' : printf ("%d", num1/num2);
        break;
        case '%' : printf ("%d", num1+num2);
        break;
        }


    return 0;
}
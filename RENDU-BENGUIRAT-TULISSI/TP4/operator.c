// Yamen BEN GUIRAT et Enzo Tulissi, Prog C //

// 01/11/23 //




#include <stdio.h>
#include "operator.h"

//implémentation des fonctions addition soustraction, produit, quotient, modulo, ET, OU, negation

int addition(int num1, int num2) {
    return num1 + num2;
}

int soustraction(int num1, int num2){
    return  num1 - num2;
}

int produit(int num1, int num2){
    return num1*num2;
}

int quotient(int num1, int num2){
    return num1/num2;
}

int modulo(int num1, int num2){
    return num1%num2;
}

int ET(int num1, int num2){
    return num1&&num2;
}

int OU(int num1, int num2){
    return num1 || num2;
}

int negation(int num1, int num2){
    return ~num1;
}
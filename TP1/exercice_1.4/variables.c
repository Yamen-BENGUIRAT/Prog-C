#include <stdio.h>

int main() {
    // Variables de différents types de base
    char signedChar = 'A';
    unsigned char unsignedChar = 255;
    short signedShort = -12345;
    unsigned short unsignedShort = 56789;
    int signedInt = -1234567;
    unsigned int unsignedInt = 9876543;
    long signedLong = -1234567890L;
    unsigned long unsignedLong = 9876543210UL;
    long long signedLongLong = -123456789012345LL;
    unsigned long long unsignedLongLong = 987654321098765ULL;
    float floatVar = 3.14159f;
    double doubleVar = 2.71828;
    long double longDoubleVar = 1.4142135623730951L;

    // Afficher les valeurs de chaque variable
    printf("signed char : %c\n", signedChar);
    printf("unsigned char : %u\n", unsignedChar);
    printf("signed short : %d\n", signedShort);
    printf("unsigned short : %u\n", unsignedShort);
    printf("signed int : %d\n", signedInt);
    printf("unsigned int : %u\n", unsignedInt);
    printf("signed long : %ld\n", signedLong);
    printf("unsigned long : %lu\n", unsignedLong);
    printf("signed long long : %lld\n", signedLongLong);
    printf("unsigned long long : %llu\n", unsignedLongLong);
    printf("float : %f\n", floatVar);
    printf("double : %lf\n", doubleVar);
    printf("long double : %Lf\n", longDoubleVar);

    return 0;
}


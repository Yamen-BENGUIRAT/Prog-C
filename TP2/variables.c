#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables de différents types
    char c = 0xFF;
    short s = 0xFFFF;
    int i = 0xA47865FF;
    long int l = 0xA47865FF;
    long long int ll = 0xA47865FFA47865FF;
    float f = 2.25;
    double d = 3.14159265359;
    long double ld = 123456.789;

    // Déclaration des pointeurs pour stocker les adresses des variables
    char *ptr_c = &c;
    short *ptr_s = &s;
    int *ptr_i = &i;
    long int *ptr_l = &l;
    long long int *ptr_ll = &ll;
    float *ptr_f = &f;
    double *ptr_d = &d;
    long double *ptr_ld = &ld;

    // Affichage des adresses et des valeurs des variables avant manipulation
    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : 0x%x\n", ptr_c, c);
    printf("Adresse de s : %p, Valeur de s : 0x%x\n", ptr_s, s);
    printf("Adresse de i : %p, Valeur de i : 0x%x\n", ptr_i, i);
    printf("Adresse de l : %p, Valeur de l : 0x%lx\n", ptr_l, l);
    printf("Adresse de ll : %p, Valeur de ll : 0x%llx\n", ptr_ll, ll);
    printf("Adresse de f : %p, Valeur de f : 0x%x\n", ptr_f, *(int*)ptr_f);
    printf("Adresse de d : %p, Valeur de d : 0x%llx\n", ptr_d, *(long long int*)ptr_d);
    printf("Adresse de ld : %p, Valeur de ld : 0x%llx\n", ptr_ld, *(long long int*)ptr_ld);

    // Manipulation des variables via les pointeurs
    *ptr_c = 0x12;
    *ptr_s = 0x1234;
    *ptr_i = 0x56789ABC;
    *ptr_l = 0xABCDEF1234567890;
    *ptr_ll = 0x98765432ABCDEF01;
    *ptr_f = 1.0;
    *ptr_d = 2.71828182846;
    *ptr_ld = 3.14159265359;

    // Affichage des adresses et des valeurs des variables après manipulation
    printf("\nAprès la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : 0x%x\n", ptr_c, c);
    printf("Adresse de s : %p, Valeur de s : 0x%x\n", ptr_s, s);
    printf("Adresse de i : %p, Valeur de i : 0x%x\n", ptr_i, i);
    printf("Adresse de l : %p, Valeur de l : 0x%lx\n", ptr_l, l);
    printf("Adresse de ll : %p, Valeur de ll : 0x%llx\n", ptr_ll, ll);
    printf("Adresse de f : %p, Valeur de f : 0x%x\n", ptr_f, *(int*)ptr_f);
    printf("Adresse de d : %p, Valeur de d : 0x%llx\n", ptr_d, *(long long int*)ptr_d);
    printf("Adresse de ld : %p, Valeur de ld : 0x%llx\n", ptr_ld, *(long long int*)ptr_ld);

    return 0;
}

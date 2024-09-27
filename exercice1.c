#include <stdio.h>

int main(){
    int base;
    int hauteur;

    printf("Entree :\n");
    printf("Base : ");
    scanf("%i",&base);
    printf("Hauteur: ");
    scanf("%i",&hauteur);

    printf("Sortie : \n");
    printf("Laire : %i\n",(base * hauteur) / 2);
    printf("Perimetre : %i",3 * base);
    return 0;
}
#include <stdio.h>

int main(){
    float temp;

    printf("Entree : ");
    scanf("%f",&temp);

    if(temp >= 38){
        printf("Sortie : Vous Avez De La Fievre.");
    }else{
        printf("Votre Temperature Est Normale");
    }
    return 0;
}
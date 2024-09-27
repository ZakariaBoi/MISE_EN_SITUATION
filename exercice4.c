#include <stdio.h>

int main(){
    float temps[5];
    for(int i = 0; i <= 4; i++){
        printf("Entree %i : ",i + 1);
        scanf("%f",&temps[i]);
    }
    float min = temps[0];
    float max = temps[0];

    for(int i = 0; i <= 4; i++){
        if(temps[i] < min){
            min = temps[i];
        }
        else if(temps[i] > max){
            max = temps[i];
        }
    }
  
    printf("Sortie : \n");
    printf("La Plus Haute Temperatue : %.1f\n",max);
    printf("La Plus basse Temperatue : %.1f\n",min);
    return 0;
}
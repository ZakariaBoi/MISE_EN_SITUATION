#include <stdio.h>

int main(){
    int n;
    printf("Entree : ");
    scanf("%i",&n);

    int min;
    int max;
    if(n-1 > 2){
        min = 2;
        max = n - 1;
    }else if(n-1 < 2){
        min = n - 1;
        max = 2;
    }

    for(int i = min; i <= max; i++){
        if(n % i == 0){
            printf("Ce N'est Pas Un Nombre Premier");
            return 1;
            break;
        }
    }
    printf("C'est Un Nombre Premier");
    return 0;
}
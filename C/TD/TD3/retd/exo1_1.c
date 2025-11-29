#include <stdio.h>

int main(){
    int tab[20];
    for(int i=0;i<20;i++){
        printf("Donne moi le nombre a l'indice %d: ",i);
        scanf("%d",&tab[i]);
    }
    
    printf("[");
    for(int i=0;i<19;i++){
        printf("%d,",tab[i]);
    }
    printf("%d",tab[19]);
    printf("]\n");

    return 0;
}
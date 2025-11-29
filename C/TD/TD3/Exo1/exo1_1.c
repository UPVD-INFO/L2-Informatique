#include <stdio.h>
#include <time.h>

int main(){
    int tab[20];
    for(int i=0;i<20;i++){
    printf("Donne moi la valeur: ");
    scanf("%d",&tab[i]);
    }
    printf("[");
    for(int i=0;i<19;i++){
    printf("%d,",tab[i]);
    }
    printf("%d",tab[19]);
    printf("] \n");

    return 0;
}

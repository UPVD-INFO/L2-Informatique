#include <stdio.h>

int main(){
    int tab[20];
    for(int i=0;i<20;i++){
    printf("Donne moi la valeur: ");
    scanf("%d",&tab[i]);
    }
    int min=tab[0],max=tab[0];

    for(int i=0;i<20;i++){
    if(tab[min]>=tab[i])
    min=i;

    if(tab[max]<=tab[i])
    max=i;
    }
    printf("l'indice du minimun est %d \n",min);
    printf("l'indice du maximum est %d \n",max);

return 0;
}
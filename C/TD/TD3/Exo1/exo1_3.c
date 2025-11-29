#include <stdio.h>

int main(){
    int tab[20];
    for(int i=0;i<20;i++){
    printf("Donne moi la valeur: ");
    scanf("%d",&tab[i]);
    }
    int n,res=0;
    printf("Donne moi n: ");
    scanf("%d",&n);

    for(int i=0;i<20;i++){
    if(n>tab[i])
    res++;
    }
    printf("Le nombre de valeurs plus petit est de %d \n",res);

return 0;
}

//Modifier le programme pour lire une valeur entière n, et rechercher le nombre de valeurs du tableau plus
//petites que n.
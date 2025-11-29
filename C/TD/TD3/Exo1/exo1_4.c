#include <stdio.h>

int main(){
    int n,k;
    printf("Donne moi k: ");
    scanf("%d",&k);
    printf("Donne moi la taille du tableau: ");
    scanf("%d",&n);

    int tab[n];
    for(int i=0;i<n;i++){
    printf("Donne moi la valeur: ");
    scanf("%d",&tab[i]);
    }
    //affichage avant
    printf("[");
    for(int i=0;i<n;i++){
    printf("%d,",tab[i]);
    }
    printf("%d",tab[n-1]);
    printf("] \n");

    //permutation rang k
    int tmp;
    for(int i=0;i<n/2;i++){
    tmp=tab[(i+k)%n];
    tab[(i+k)%n]=tab[i];
    tab[i]=tmp;
    }
    //affichage apres
    printf("[");
    for(int i=0;i<n;i++){
    printf("%d,",tab[i]);
    }
    printf("%d",tab[n-1]);
    printf("] \n");


return 0;
}
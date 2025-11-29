#include <stdio.h>

int main(){
    int n=4,compt=0;
    int tab[n];
    for(int i=0;i<n;i++){
        printf("Donne moi la valeur ");
        scanf("%d",&tab[i]);
    }
    for(int i=0;i<n;i++){
        if(tab[i]<n && tab[i]>=0)
        compt+=1;
        printf("%d \n",compt);
    }

    if(compt==n)
    printf("le tableau est une permutation\n");
    else
    printf("Le tableau n'est pas une permutation\n");
    return 0;
}
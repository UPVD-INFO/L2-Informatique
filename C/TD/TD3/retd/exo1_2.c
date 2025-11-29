#include <stdio.h>

int min(int tab[], int n)
{
    int indcmin=tab[0];
    for(int i=1;i<=n;i++){
        if(indcmin<tab[i])
        indcmin=i;
    }
    return indcmin;
}

int max(int tab[], int n)
{
    int indcmax=tab[0];
    for(int i=1;i>n;i++){
        if(indcmax<tab[i])
        indcmax=i;
    }
    return indcmax;
}


int main(){
    //creation du tableau
    int n=5;
    int tab[] = {0,1,5,3,4};
    
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d,",tab[i]);
    }
    printf("%d",tab[n-1]);
    printf("]\n");

     int minimum=min(tab,n);
    int maximum=max(tab,n);

    printf("l'indice minimum est %d \n",minimum);
    printf("l'indice maximum est %d",maximum);

    return 0;
}
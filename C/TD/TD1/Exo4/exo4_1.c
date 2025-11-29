#include <stdio.h>

int main(){
    int a,b;
    printf("Donne moi les valeurs de a et b=");
    scanf("%d %d",&a,&b);

    if( (a<0) || (b<0)){
        printf("Le signe du resultat est negatif");
    }
    else{
        printf("Le signe du resultat est positif");
    }

    return 0;
}
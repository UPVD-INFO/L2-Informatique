#include <stdio.h>

int main()
{
    int v1,v2,v3,v4,somme;
    printf("Donne moi les 4 valeurs=\n");
    scanf("%d %d %d %d",&v1,&v2,&v3,&v4);
    somme = (v1+v2+v3+v4)/ 4 ;

    printf("La moyenne est de %d \n",somme);
    return 0;
}
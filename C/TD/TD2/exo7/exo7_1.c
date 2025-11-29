#include <stdio.h>

int suite(int a, int k)
{
    int un=a;
    for(int i=1;i<=k;i++){
        
        if(un==a)
        printf("La valeur de la suite a l'instant %d est de %d \n",0,a);
        
        if(un%2==0)
        un/=2;
        
        else
        un=(3*un)+1;

        printf("La valeur de la suite a l'instant %d est de %d \n",i,un);
    }

    
}

int main(){
    int a,k;
    printf("Donne moi a et k: ");
    scanf("%d %d",&a,&k);

    suite(a,k);

    return 0;
}

/*int main(){
    int a,k;
    printf("Donne moi a et k: ");
    scanf("%d %d",&a,&k);
    
    int un=a;

    for(int i=0;i<=k;i++){
        printf("La valeur de la suite a l'instant %d est de %d \n",i,un);

        if(un%2==0)
        un/=2;
        
        else
        un=(3*un)+1;
    }

    return 0;
}*/
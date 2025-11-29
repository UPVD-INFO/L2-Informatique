#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sapin(int l, int h, int r,int p)
{   
    int proba;
    //creation du sapin standart
    for(int i=0;i<l;i++){
        for(int vide= l-1-i;vide>0;vide--){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            proba= rand() % 101;
            if(proba>=0 && proba<=p)
            printf("o");
            else
            printf("^");
        }
        for(int vide= l-1-i;vide>0;vide--){
            printf(" ");
        }
        printf("\n");
    }
    //creation du tronc
    int tronc= (2*r-1);
    int vide= ((2*l-1)-tronc)/2;
    for(int i=0;i<h;i++){
        for(int j=0;j<vide;j++)
            printf(" ");
        for(int j=0;j<tronc;j++)
            printf("+");
        for(int j=0;j<vide;j++)
            printf(" ");
        printf("\n");
    }
}

int main(){
    srand(time(NULL));

    int l,h,r,p;
    printf("Donne moi l: ");
    scanf("%d",&l);
    printf("Donne moi la hauteur du tronc: ");
    scanf("%d",&h);
    printf("Donne moi le rayon du tronc: ");
    scanf("%d",&r);
    printf("Donne moi la probabilite: ");
    scanf("%d",&p);
    

    sapin(l,h,r,p);
    return 0;
}
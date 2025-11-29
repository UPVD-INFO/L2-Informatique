#include <stdio.h>
#include <stdlib.h>

double** malloc2d(int n, int m)
{
    //creation du tableau 2d
    double**tab= malloc(n*sizeof(double*));
    //creation des pointeurs tab[n]
        for(int j=0; j<n;j++){
            tab[j]= malloc(m*sizeof(double));
        }

    //remplissage avec des 0 sur tab2
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            tab[i][j]=0;
        }
    }

    return tab;
}

void malloc2d_sans_return(double*** tab, int n, int m)
{
    //creation du tableau 2d
    (*tab)= malloc(n*sizeof(double*));
    
    //creation des colonnes
    for(int i=0;i<n;i++){
        (*tab)[i]= malloc(m*sizeof(double));
    }

    //remplissage avec des 0
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            (*tab)[i][j]=0;
        }
    }    
}

void affichage_matrice(double** tab, int n, int m)
{
    //parcour tout les valeurs de la matrice n lignes et m colonnes
    for(int i=0; i<n; i++){
    for(int j=0; j<m;j++){
        printf("%lf ",tab[i][j]);
    }
    printf("\n");
}
}

double** multiplication_matrice(double** mat1, int n, int m,double** mat2, int M, int p)
{
    //verification taille des 2 matrices
    if(m!=M){
    printf("Probleme taille!!");
    return 0;
}


    //creation mat res
    double** res;
    res=malloc2d(n,p);
    affichage_matrice(res,n,p);
    printf("\n");

    //la taille est bonne donc
    for(int i=0; i<n; i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<M;k++){
                res[i][j]+= mat1[i][k]*mat2[k][j];
            }
        }
    }
    
     return res;
}

double** remplir_tab(double** tab,int n,int m)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Donne moi la valeur= ");
            scanf("%lf",&tab[i][j]);
        }
    }
    return tab;

}

void transposee_matrice(double*** mat, int n, int m)
{
    double** mat2= malloc2d(m,n);
    int tmp;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat2[j][i]= (*mat)[i][j];
        }
      }
      *mat=mat2;
}

int main(){
    //declaration des valeurs/variables
    double** A;
    double** B;
    double** res;
    int n1,m1,n2,m2;

   /* printf("Donne moi le nombre de lignes de tab1: ");
    scanf("%d",&n1);
    printf("Donne moi le nombre de colonnes de tab1: ");
    scanf("%d",&m1);
    printf("Donne moi le nombre de lignes de tab2: ");
    scanf("%d",&n2);
    printf("Donne moi le nombre de colonnes de tab2: ");
    scanf("%d",&m2);

    //Creation des matrices
    A=malloc2d(n1, m1);
    B=malloc2d(n2, m2);
    A=remplir_tab(A,n1,m1);
    B=remplir_tab(B,n2,m2);

    //remplissage matrice resultat
    res=multiplication_matrice(A,n1,m1,B,n2,m2);
    affichage_matrice(res,n1,m2);*/

    A=malloc2d(2, 3);
    A=remplir_tab(A,2,3);
    affichage_matrice(A,2,3);
    transposee_matrice(&A,2,3);
    affichage_matrice(A,3,2);

    free(A);
    free(B);
    free(res);
    //free(tab);
    return 0;
}
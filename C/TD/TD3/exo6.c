#include <stdio.h>

void calcul(int A[2][2], int B[2][2], int C[2][2])
{ 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j]=0;
            for (int k = 0; k < 2; k++){
                C[i][j]+= A[i][k]*B[k][j];
        }
    }
 }
}


void affichage_tab(int t[2][2])
{
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat1[2][2],mat2[2][2];
    int mat3[2][2]= {0};

    //mat1
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Donne moi la valeur: ");
            scanf("%d", &mat1[i][j]);
        }
    }
    //mat2
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Donne moi la valeur: ");
            scanf("%d", &mat2[i][j]);
        }
    }

    calcul(mat1,mat2,mat3);
    affichage_tab(mat3);
}


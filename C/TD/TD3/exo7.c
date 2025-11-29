#include <stdio.h>

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
    int n;
    printf("n: ");
    scanf("%d",&n);

    int fibo0=0,fibo1=1;
    int fibo=0;

    for(int i=2;i<n;i++){
        fibo= fibo1+fibo0;
        fibo0=fibo1;
        fibo1=fibo;
        printf("fibo: %d, fibo n-1 : %d et fibo n-2 : %d \n",fibo,fibo1,fibo0);
    }
    printf("La valeur fibo a %d est de : %d \n",n,fibo);

    //question 3

    int F[2][2]= {{1,1},{1,0}};


      for(int i=0; i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                s+= F[i][k]*F[k][j];
            }
            F[i][j]=s;
        }
    }
}
    affichage_tab(F);

    return 0;
}
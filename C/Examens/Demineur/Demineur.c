#include <stdio.h>

void affichate_tab(int* t, int n)
{
    for(int i=0;i<n;i++){
        printf("%d ", t[i]);
    }
    printf("\n");
}

void ajouter(int* t,int n, int aj)
{
    int i=0;
    while(i<n){
        if(t[i]==(-1)){
            t[i]=aj;
            i=n;
        }
        i++;
    }

}

int retirer(int* t,int n)
{  
    int res=t[0];
    for(int i=0; i<n-1;i++){
        t[i]= t[i+1];
    } 
    t[n-1]=-1;
    return res;
}

typedef struct case
{
    char etat_case;
    int nmbre_mines;
    char case contient mine;
}case_t;

typedef struct grille
{
    int dim_grille;
    int** t;
    int total_mines;
    int mines_decouvertes;
}grille_t;

int main(){
    int tmp;
    int t[]= {1, 3, 0, 2, 5, -1, -1, -1};
    affichate_tab(t,8);
    ajouter(t,8,90);
    affichate_tab(t,8);
    tmp=retirer(t,8);
    printf("%d \n",tmp);
    tmp=retirer(t,8);
    printf("%d \n",tmp);
    affichate_tab(t,8);
}
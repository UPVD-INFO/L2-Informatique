#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

typedef struct cases
{
    char etat_cases;
    int nmbre_mines;
    char cases_contient_mine;
}case_t;

void allocation_grille(int*** t, int lig, int col)
{
    *t= malloc(lig * sizeof(int*));
    for(int i=0;i<lig;i++){
    (*t)[i]= malloc(col * sizeof(int));
    }
    for(int i=0;i<lig;i++){
        for(int j=0;j<col;j++){
            (*t)[i][j]=0;
        }
    }
}

typedef struct grille
{
    int nombre_lignes;
    int nombres_colones;
    int** t;
    int total_mines;
    int mines_decouvertes;
}grille_t;

grille_t creer(int nb_lignes, int nb_colones, int nb_mines)
{
    //creation de la grille
    grille_t grille;
    grille.nombre_lignes= nb_lignes;
    grille.nombres_colones= nb_colones;
    allocation_grille(&grille.t, grille.nombre_lignes, grille.nombres_colones);
    grille.total_mines= nb_mines;
    grille.mines_decouvertes=0;

    //Positionnnement des mines
    int x,y;
    while(nb_mines>0){
        x=rand() * grille.nombre_lignes;
        y=rand() * grille.nombres_colones;

        if(grille.t[x][y]!='X'){
            grille.t[x][y]='X';
        }
        nb_mines--;
    }

    // Mises a jour des cases adjacentes
    for(int i=0;i<nb_lignes;i++){
        for(int j=0; j<nb_colones;j++){
            
            if(grille.t[i][j]== 'X'){
                //Cas haut
                if((i-1)>-1 && (j)<nb_colones)
                grille.t[i-1][j]++;
                //cas haut droite
                if((i-1)>-1 && (j+1)<nb_colones)
                grille.t[i-1][j+1]++;
                //cas haut gauche
                if((i-1)>-1 && (j-1)>-1)
                grille.t[i-1][j-1]++;
                //cas droite
                if( i >-1 && i<nb_lignes &&(j+1)<nb_colones)
                grille.t[i][j+1]++;
                //cas gauche
                if( i >-1 && i<nb_lignes &&(j-1)>-1)
                grille.t[i][j-1]++;
                //cas bas
                if( (i+1)<nb_lignes && (j)<nb_colones)
                grille.t[i][j+1]++;
                //cas bas droite
                if( (i+1)<nb_lignes &&(j+1)<nb_colones)
                grille.t[i+1][j+1]++;
                //cas bas gauche
                if( (i+1)<nb_lignes &&(j+1)<nb_colones)
                grille.t[i+1][j-1]++;
            }
        }
    }

    return grille;
}

void afficher(grille_t grille)
{
    //Creation de la grille
    printf("#");
    for(int i=0; i<grille.nombre_lignes;i++){
        printf("#");
    }
    printf("#\n");

    for(int i=0;i<grille.nombre_lignes;i++){
        printf("#");
        for(int j=0; grille.nombres_colones;j++){
            //devoile et vide (Espace)
            if(grille.t[i][j] == 0)
            printf(" ");
            //non devoile et non marque (mines)
            else if(grille.t[i][j] == 'X')
            printf("%c", grille.t[i][j]);
            // non devoilee et marque (dreapeau)
            else if(grille.t[i][j] == 'F')
            printf("%c", grille.t[i][j]);
            //Devoilee et indiquant nombres mines (cases adjacentes)
            else
            printf("%d",grille.t[i][j]);
        }
        printf("#\n");
    }

    printf("#");
    for(int i=0; i<grille.nombre_lignes;i++){
        printf("#");
    }
    printf("#\n");

}

int main(){
    srand(time(NULL));
    grille_t grille= creer(15,15,5);
    afficher(grille);
}
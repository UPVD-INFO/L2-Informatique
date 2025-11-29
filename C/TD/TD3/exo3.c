#include <stdio.h>

int taille_tab(char t[256])
{   
    int i=0;
    while(t[i] != '\0'){
        i++;
    }
    return i;
}

void nombre_caractere(char t[256], int n)
{   
    int cpt=0,nbreChar=0,nbreInt=0;
    char alphamin= 'a';
    char alphamax= 'A';
    char alphanum= '1';
    
    //minuscules
    for(int i=0;i<26;i++){
        for(int j=0;j<n;j++){
            if(t[j] == alphamin)
            nbreChar++;
        }
        alphamin++;
    }
    //majuscules
    for(int i=0;i<26;i++){
        for(int j=0;j<n;j++){
            if(t[j] == alphamax)
            nbreChar++;
        }
        alphamax++;
    }
    //chiffres
    for(int i=0;i<9;i++){
        for(int j=0;j<n;j++){
            if(t[j]==alphanum)
            nbreInt++;
        }
        alphanum++;
    }
    printf("int: %d et CHar: %d",nbreInt,nbreChar);
}

void renverser_tab(char t[255], int n)
{
    for(int i=0; i<n/2;i++){
        char tmp1=t[i];
        t[i]=t[n-1-i];
        t[n-1-i]= tmp1;
    }
    printf("%s \n", t);
}

int occurence_tab(char t[256], int n, char carac)
{
    int cpt=0;
    for(int i=0;i<n;i++){
        if(carac==t[i])
        cpt++;
    }
    return cpt;
}

int indice_tab(char t[256], int n, char carac)
{
    for(int i=0; i<n;i++){
        if(t[i]==carac)
        return i;
    }
    return -1;
}

int compare_chaine( char t1[256], int n1, char t2[256], int n2)
{
    int taille;
    (n1<n2) ? (taille=n1) : (taille=n2);

    for(int i=0;i<taille-1;i++){
        if(t1[i]<t2[i])
        return 1;

        if(t1[i]>t2[i])
        return -1;
    }
    //si la chaine mot1 est la meme que mot2 jusqu'a n1
    if(n1<n2)
    return 1;

    return 0;
}

char convertir_maj(char t[256], int n)
{
    int alphamin= 'a';
    int alphamax= 'A';
    for(int i=0; i<26;i++){
        for(int j=0;j<n;j++){
            if(alphamin== t[i])
            t[i]= alphamax;
        }
        alphamin++;
        alphamax++;
    }

    return t[256];
}


int main(){
/*
   //Question 1
    char stab[256];
    printf("Ecris la chaine= ");
    scanf(" %s", stab);
    int n= taille_tab(stab);
    printf("La taille du tableau est: %d \n",n);

    //q2
    nombre_caractere(stab,n);

    //q3
    char motrenv[256];
    printf("Donne moi la chaine : ");
    scanf("%s",motrenv);
    int n= taille_tab(motrenv);
    renverser_tab(motrenv,n);

    //q4
    char motoccur[256], carac;
    printf("Donne moi le mot: ");
    scanf("%c", &carac);
    printf("Donne moi la chaine: ");
    scanf("%s", motoccur);
    
    int n=taille_tab(motoccur);
    int ocure=occurence_tab(motoccur,n,carac);
    printf("Le nombre d'occurence est de : %d",ocure);

    //q5
    char motind[256], carac;
    printf("Donne moi le carac: ");
    scanf(" %c", &carac);
    printf("Donne moi la chaine: ");
    scanf("%s", motind);
    
    int n=taille_tab(motind);
    int ind=indice_tab(motind,n,carac);
    if(ind!=-1)
    printf("L'indice est : %d",ind);
    else
    printf("il n'y a pas cette lettre dans la chaine");

    //q6
    char mot1[256], mot2[256];
    printf("Donne moi la chaine 1: ");
    scanf(" %s", mot1);
    printf("Donne moi la chaine 2: ");
    scanf("%s", mot2);

    int n1,n2;
    n1=taille_tab(mot1);
    n2=taille_tab(mot2);

    int res= compare_chaine(mot1,n1,mot2,n2);

    printf("le resultat est %d",res);
*/
    //q7
    char maj[256];
    printf("Donne moi la chaine: ");
    scanf(" %s", maj);

    int n=taille_tab(maj);
    for(int i=0;i<n;i++){
        printf("%c ",maj[i]);
    }
    printf("\n");

    convertir_maj(maj,n);

    for(int i=0;i<n;i++){
        printf("%c ",maj[i]);
    }
    printf("\n");

    return 0;
}
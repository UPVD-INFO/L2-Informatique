#include <stdio.h>

typedef struct Somme
{
    int signe;
    unsigned short k;
    unsigned short *tab;
}Somme_t;

Somme_t nombre_p(int p)
{
    Somme_t n;
    if(p%16 !=0){
    n.k=(p/16)+1;}
    else{
    n.k=p/16;}

    n.tab= malloc(n.k * sizeof(unsigned short));
    n.signe=1;

    if (n.tab == NULL) {
    printf("Erreur d'allocation\n");
    return n; 
    }

    for (int i = 0; i < n.k; i++)
    n.tab[i] = 0;

    return n;
}

Somme_t remplissage_hexadecimal( Somme_t t, int n)
{
    int i=0;
    while(n>0 && i<t.k){
        t.tab[i]= n % 16;
        i++;
        n/=16;
    }

    return t;
}

Somme_t convertisseur_int_hexa(int n)
{   
    //creation de la taille en bits du nombre
    int p=0,copie_n=n;
    while(copie_n>1){
        copie_n= copie_n>>1;
        p++;
    }
    p++;

    for(int i=p;i<16;i++){
        p++;
    }

    Somme_t t = nombre_p(p);

    //remplissage du tableau de bits en hexa
    t= remplissage_hexadecimal(t,n);

    return t;
}

Somme_t Addition(Somme_t a, Somme_t b)
{
    Somme_t res;
    if( b.tab< a.tab)
}
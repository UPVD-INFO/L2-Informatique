#include <stdio.h>

void affichage_tab(char t[256], int n)
{
    printf("[");
    for(int i=0;i<n-1;i++){
        printf("%c,",t[i]);
    }
    printf("%c] \n",t[n-1]);
}

int taille_tab(char t[256])
{   
    int i=0;
    while(t[i] != '\0'){
        i++;
    }
    return i;
}

void criptage(char t[256], int n, int k)
{
    int alphamin= 'a';
    for(int i=0; i<n;i++){
        if((t[i]+k)>122)
        t[i]=97+((t[i]+k)%122);

        else
        t[i]+=k;
    }
}

void decriptage(char t[256], int n, int k)
{
    int alphamin= 'a';
    for(int i=0; i<n;i++){
        if((t[i]-k)<97)
        t[i]=122-((t[i]-k)%122);

        else
        t[i]-=k;
    }
}

int main(){
    char tabcrip[256];
    int k,n;
    printf("Donne moi tab: ");
    scanf("%s", tabcrip);
    printf("Donne moi k: ");
    scanf("%d", &k);
    //criptage
    n=taille_tab(tabcrip);
    affichage_tab(tabcrip,n);
    criptage(tabcrip,n,k);
    affichage_tab(tabcrip,n);

    //decriptage
    affichage_tab(tabcrip,n);
    decriptage(tabcrip,n,k);
    affichage_tab(tabcrip,n);
}
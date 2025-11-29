 #include <stdio.h>


 int main(){
    int n=5;
    int tab[] = {0,1,5,3,4};
    
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d,",tab[i]);
    }
    printf("%d",tab[n-1]);
    printf("]\n");
}

tableau matrice passage parametre pointeur fonction structure
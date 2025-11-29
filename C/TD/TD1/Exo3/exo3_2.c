#include <stdio.h>

int main(){
    int a,b;
    printf("Donne moi les valeurs de a et b= ");
    scanf("%d %d",&a,&b);

    if (a<=b){
        printf("a<=b, les conditions sont verifie");
    } 
    else{
        printf("les conditions ne sont pas remplies, b>a");
    }

    return 0;

}
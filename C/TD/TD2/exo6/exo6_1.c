#include <stdio.h>

int mul_egipt(int a, int b)
{
    int r=0;
    while(1){
        if(b==0)
        return r;

        else if(b%2==0){
            a*=2;
            b/=2;
        }
        else{
            b-=1;
            r+=a;
        }
    }
}

int main(){
    int a,b;
    printf("Donne moi a et b: ");
    scanf("%d %d",&a,&b);

    int res= mul_egipt(a,b);
    printf("Le resultat de %d x %d = %d",a,b,res);

    return 0;
}
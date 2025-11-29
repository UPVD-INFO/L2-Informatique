#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,disc,x1,x2;
    //valeurs donne au clavier
    printf("Donne moi la valeur de a=");
    scanf("%f",&a);
    printf("Donne moi la valeur de b=");
    scanf("%f",&b);
    printf("Donne moi la valeur de c=");
    scanf("%f",&c);

    //calcul du discriminant
    disc= (b*b)-(4*a*c);
    x1=((-b)-sqrtf(disc))/2*a;
    x2=((-b)+sqrtf(disc))/2*a;
    
    (disc>0) ? (printf("Lequation admet 2 polynomes qui sont x1= %f et x2= %f \n",x1,x2)) : (printf("L'equiation admet une seul solution qui est x= %f", (-b)/(2*a) )); //: (printf("Le polynome n'a pas de solution possible"));
    
    return 0;
}
#include <stdio.h>
#include <math.h>  // pour l'appel a sqrtf(.)

int
main(void)
{
  float a, b, c, delta, r1, r2;

  printf("Soit l'equation a x^2 + b x + c = 0.\n");
  printf("Lire la valeur des coefficients (a, b, c)= ");
  scanf("%f %f %f", &a, &b, &c);

  // ... calcul du discriminant delta
  delta = b*b - 4.f*a*c;

  // ... determination des racines
  if(delta < 0)
    printf("L'equation n'admet pas de solution.\n");
  else if(delta == 0){
    r1 = -b/(2.f * a);
    printf("L'equation admet une solution unique r = '%f'.\n", r1);
  }else{
    r1 = (-b-sqrtf(delta))/(2.f * a);
    r2 = (-b+sqrtf(delta))/(2.f * a);
    printf("L'equation admet deux solutions r1, r2 = '%f', '%f'.\n", r1, r2);
  }
  
  return 0;
}

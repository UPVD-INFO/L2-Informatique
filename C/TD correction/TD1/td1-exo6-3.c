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
  (delta < 0) ? printf("L'equation n'admet pas de solution.\n") :
    (
     (delta == 0) ? printf("L'equation admet une solution unique r = '%f'.\n", -b/(2.f*a)) : printf("L'equation admet deux solutions r1, r2 = '%f', '%f'.\n", (-b-sqrtf(delta))/(2.f*a), (-b+sqrtf(delta))/(2.f*a))
     );

  return 0;
}

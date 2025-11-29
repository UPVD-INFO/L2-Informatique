#include <stdio.h>

#define EURO 6.55957f  // definition d'une constante flottante

int
main(void)
{
  float sommeF, sommeE;

  printf("Saisir une somme en francs= ");
  scanf("%f", &sommeF);

  sommeE = sommeF / EURO /* 6.55957f */;
  printf("Donc %f F = %f E.\n", sommeF, sommeE);
  
  return 0;
}

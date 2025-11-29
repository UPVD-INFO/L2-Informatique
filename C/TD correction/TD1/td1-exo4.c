#include <stdio.h>

int
main(void)
{
  int a, b;

  printf("Saisir deux valeurs entieres (a, b)= ");
  scanf("%d %d", &a, &b);

  if((a > 0 && b > 0) || (a < 0 && b < 0))
    printf("Le produit '%d' x '%d' est positif.\n", a, b);
  else
    printf("Le produit '%d' x '%d' est negatif.\n", a, b);

  return 0;
}

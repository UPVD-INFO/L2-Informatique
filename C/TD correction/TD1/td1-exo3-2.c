#include <stdio.h>

int
main(void)
{
  int a = 0, b = 0, tmp;

  printf("Lire deux valeurs entieres (a, b)= ");
  scanf("%d %d", &a, &b);

  if(a >= b)
    printf("Les valeurs a et b sont deja ordonnnees: '%d' >= '%d'.\n", a, b);
  else {
    printf("Les valeurs a et b ne sont pas ordonnnees: '%d' < '%d'... on les echange.\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
  }
  printf("Finalement: (a, b) = (%d, %d).\n", a, b);
  
  return 0;
}

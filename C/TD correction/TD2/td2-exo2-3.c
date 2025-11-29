#include <stdio.h>
#include <math.h>

int
main(void)
{
  int n, i;
  int somme = 0;
  
  printf("Lire la valeur n= ");
  scanf("%d", &n);

  i = 1;
  while(i < n) {
    if((n % i) == 0)
      somme += i;
    i = i + 1;
  }

  if(n == somme)
    printf("Le nombre n=%d est parfait.\n", n);
  else
    printf("Le nombre n=%d n'est pas parfait.\n", n);
  
  return 0;
}

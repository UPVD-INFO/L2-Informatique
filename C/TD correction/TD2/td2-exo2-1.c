#include <stdio.h>
#include <math.h>

int
main(void)
{
  int n, i;

  printf("Lire la valeur n dont on veut tester la primalite= ");
  scanf("%d", &n);

  if(n < 1 || (n % 2 == 0 && n != 2))
    printf("Le nombre n=%d n'est pas premier.\n", n);
  else if(n == 1)
    printf("Le nombre n=%d n'est pas premier.\n", n);
  else{
    i = 3;
    while((i <= (int)ceilf(sqrtf((float)n))) && ((n % i) != 0))
      i = i + 1;
    
    if((n % i) == 0)
      printf("Le nombre n=%d n'est pas premier.\n", n);
    else
      printf("Le nombre n=%d est premier.\n", n);
  }

  return 0;
}

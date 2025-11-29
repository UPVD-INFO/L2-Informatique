#include <stdio.h>
#include <math.h>

int
main(void)
{
  int n, i, k;
  int somme = 0;
  
  printf("Lire le nombre k= ");
  scanf("%d", &k);
  
  for(n = 1; n <= k; n++) {
    somme = 0;
    i = 1;
    while(i < n) {
      if((n % i) == 0)
	somme += i;
      i = i + 1;
    }
    
    if(n == somme)
      printf("Le nombre n=%d est parfait.\n", n);
  }
  
  return 0;
}

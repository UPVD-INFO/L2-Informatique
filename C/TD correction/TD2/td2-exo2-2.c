#include <stdio.h>
#include <math.h>

int
main(void)
{
  int n, i, k, nb;

  printf("Lire le nombre k de nombres premiers à afficher: k= ");
  scanf("%d", &k);

  if(k >= 1){
    n = 2;        // on commence par tester 2
    nb = 0;       // pour l'instant, aucun nombre n'a ete affiche
    while(nb < k){
      if(n % 2 != 0 || n == 2) {
	i = 3;
	while((i <= (int)ceilf(sqrtf((float)n))) && ((n % i) != 0))
	  i = i + 1;

	if((n % i) != 0) {
	  printf("%d ", n);
	  nb ++;
	}
      }
      n = n + 1;  // on teste l'entier suivant
    }
    printf("\n");
  }
  
  return 0;
}

#include <stdio.h>

int
main(void)
{
  int n;
  int min = 0, max = 0, nb = 0;
  
  printf("Lire une serie d'entiers= ");
  while(scanf("%d", &n) != EOF) {
    nb = nb + 1;
    if(nb == 1) {
      min = n;
      max = n;
    }else{
      if(min > n)
	min = n;
      else if(max < n)
	max = n;
    }
  }
  printf("Donc (min, max) = (%d, %d).\n", min, max);

  return 0;
}

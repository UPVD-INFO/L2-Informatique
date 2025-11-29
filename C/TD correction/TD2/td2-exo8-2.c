#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
  int l, i, j;
  int c; // nombre de caracteres sur chaque ligne
  int h, r, k;
  
  srand(time(NULL));
  
  printf("Hauteur du sapin = ");
  scanf("%d", &l);
  printf("Hauteur du tronc = ");
  scanf("%d", &h);
  printf("Rayon du tronc = ");
  scanf("%d", &r);
  
  // ... les feuilles
  for(i = 0; i < l; i++) {
    c = 2 * i + 1;
    for(j = 0; j < l-i; j++)
      printf(" ");
    for(j = 0; j < c; j++)
      printf("^");
    printf("\n");
  }

  // ... le tronc
  for(i = 0; i < h; i++) {
    c = 2 * r - 1;
    k = (int)(((2 * l + 1) - c) / 2);
    for(j = 0; j < k; j++)
      printf(" ");
    for(j = 0; j < c; j++)
      printf("+");
    printf("\n");
  }
  
  return 0;
}
  

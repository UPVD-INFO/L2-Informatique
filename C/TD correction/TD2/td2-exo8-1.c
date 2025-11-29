#include <stdio.h>

int
main(void)
{
  int l, i, j;
  int c; // nombre de caracteres sur chaque ligne
  
  printf("Hauteur du sapin = ");
  scanf("%d", &l);

  // ... les feuilles
  for(i = 0; i < l; i++) {
    c = 2 * i + 1;
    for(j = 0; j < l-i; j++)
      printf(" ");
    for(j = 0; j < c; j++)
      printf("^");
    printf("\n");
  }

  return 0;
}
  

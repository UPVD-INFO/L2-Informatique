#include <stdio.h>

int
main(void)
{
  int a = 0;

  printf("Lire une valeur entiere= ");
  scanf("%d", &a);

  if((a % 2) == 0)
    printf("La valeur '%d' est paire...\n", a);
  else
    printf("La valeur '%d' est impaire...\n", a);

  return 0;
}

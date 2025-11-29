#include <stdio.h>

int
main(void)
{
  int a, n, k, u_i;

  printf("Lire une valeur pour a= ");
  scanf("%d", &a);
  printf("Lire une valeur pour k= ");
  scanf("%d", &k);
  
  // ...
  u_i = a;
  printf("u0= %d\n", u_i);
  for(n = 1; n <= k; n++) {
    if(u_i % 2 == 0)
      u_i = u_i / 2;
    else
      u_i = 3 * u_i + 1;
    printf("u%d= %d\n", n, u_i);
  }
  
  return 0;
}

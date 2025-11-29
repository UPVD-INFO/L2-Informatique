#include <stdio.h>

int
main(void)
{
  int l, a, u_k, k, max_k = 0;

  printf("Lire une valeur pour l= ");
  scanf("%d", &l);
  
  // ... pour toutes les valeurs a de 2 a l
  for(a = 2; a <= l; a++) {

    u_k = a;
    k = 0;
        
    // ... on cherche le premier k, tel que u_k = 1
    while(u_k != 1) {
      if(u_k % 2 == 0)
	u_k = u_k / 2;
      else
	u_k = 3 * u_k + 1;
      k ++;
    }

    // ... on met a jour le max
    if(a == 2)
      max_k = k;
    else
      max_k = (max_k > k ? max_k : k);
  }

  printf("Donc max(k) = %d\n", max_k);
  
  return 0;
}

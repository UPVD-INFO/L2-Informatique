#include <stdio.h>

int
main(void)
{
  int n, i, f1, f2, f3;
  
  printf("Lire une valeur entiere n= ");
  scanf("%d", &n);
  
  if(n < 0)
    printf("Valeur n=%d incorrecte.\n", n);
  else{
    
    // ... version 1
    f1 = 1;
    for(i = 1; i <= n; i++)
      f1 = f1 * i;
    
    // ... version 2
    f2 = 1;
    i = 1;
    while(i <= n) {
      f2 *= i; // f2 = f2 * i
      i++;
    }

    // ... version 3
    f3 = 1;
    i = 1;
    do{
      f3 *= i;
      i++;
    }while(i <= n);
    
    printf("fact(n) = %d %d %d\n", f1, f2, f3);
  }
    
  return 0;
}

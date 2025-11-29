#include <stdio.h>
#include <math.h>

int
main(void)
{
  int n, digit, i;

  printf("Lire la valeur n= ");
  scanf("%d", &n);
  
  while(n != 0) {
    digit = n % 10;
    n = n / 10;
    printf("%d", digit);
  }
  printf("\n");
    
  return 0;
}

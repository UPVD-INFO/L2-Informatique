#include <stdio.h>

int
main(void)
{
  int a, b, r = 0;

  printf("lire a et b: ");
  scanf("%d %d", &a, &b);

  while(b != 0) {
    if(b % 2 == 0) {
      a = a * 2;
      b = b / 2; 
    }else{
      b = b - 1;
      r = r + a;
    }
  }

  printf("Donc a x b = '%d'.\n", r);
  
  return 0;
}

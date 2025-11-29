#include <stdio.h>

int
main(void)
{
  int e1, e2, e3, e4;
  float moyenne;
    
  printf("Lire 4 valeurs entieres= ");
  scanf("%d %d %d %d", &e1, &e2, &e3, &e4);

  moyenne = (e1 + e2 + e3 + e4) / 4.0f; // Attention: Ici on utilise '4.0f' au lieu de '4', correspond a la valeur flottante 4.
  printf("Moyenne = %f.\n", moyenne);   //            Si on utilise '4', la division sera une division entiere !

  return 0;
}
  

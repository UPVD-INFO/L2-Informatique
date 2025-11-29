#include <stdio.h>

int
main(void)
{
  int n;
  int somme = 0, nb = 0;
  float moyenne = 0.f;
  
  printf("Lire une serie d'entiers= ");
  while(scanf("%d", &n) != EOF) {
    somme += n;
    nb = nb + 1;
  }
  
  if(nb >= 1){
    moyenne = somme / ((float)nb); // le cast permet de faire une division flottante
                                   //  et non entiere
  }
  printf("\nMoyenne= %f.\n", moyenne);

  return 0;
}

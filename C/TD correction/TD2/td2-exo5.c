#include <stdio.h>
#include <stdlib.h> // pour l'appel a srand(.)
#include <time.h>   // pour l'appel a time(NULL)

#define MIN 0
#define MAX 100
#define NC  10

int
main(void)
{
  int value, nc = 0, test = 0;

  srand(time(NULL));
  value = (rand() % (MAX - MIN + 1)) + MIN; // value \in [MIN,MAX]
  printf("%d", value);

  do{
    printf("Essai %d n=", nc+1);
    scanf("%d", &test);
    
    if(test > value)
      printf("... trop grand\n");
    else if(test < value)
      printf("... trop petit\n");

    nc ++;
  }while(nc < NC && test != value);
  
  if(nc >= NC)
    printf("Vous avez perdu !\n");
  else
    printf("Vous avez gagne !\n");
  
  return 0;
}

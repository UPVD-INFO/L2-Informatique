#include <stdio.h>

int
main(void)
{
  int age;

  printf("Quel est votre age= ");
  scanf("%d", &age);

  if(age < 5)
    printf("Vous ne pouvez pas vous inscrire ;-).\n");
  else if(age == 5 || age == 6)
    printf("Vous serez 'poussin'.\n");
  else if(age == 7 || age == 8)
    printf("Vous serez 'diablotin'.\n");
  else if(age == 9 || age == 10)
    printf("Vous serez 'preminime'.\n");
  else if(age == 11 || age == 12)
    printf("Vous serez 'minime'.\n");
  else if(age == 13 || age == 14)
    printf("Vous serez 'cadet'.\n");
  else if(age == 15 || age == 16)
    printf("Vous serez 'scolaire'.\n");
  else if(age == 17 || age == 18)
    printf("Vous serez 'espoir'.\n");
  else if(age > 18)
    printf("Vous serez 'senior'.\n");

  return 0;
}

  

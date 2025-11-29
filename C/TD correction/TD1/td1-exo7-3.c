#include <stdio.h>

// Lorsqu’une cascade de conditions porte sur une seule et meme variable entiere
// et que les tests realises sont des tests d’egalite a des valeurs, il est alors
// possible d’utiliser des branchements, avec la structure switch-case.

int
main(void)
{
  int age;

  printf("Quel est votre age= ");
  scanf("%d", &age);

  switch(age) {
  case 5:
  case 6:
    printf("Vous serez 'poussin'.\n");
    break;
  case 7:
  case 8:
    printf("Vous serez 'diablotin'.\n");
    break;
  case 9:
  case 10:
    printf("Vous serez 'preminime'.\n");
    break;
  case 11:
  case 12:
    printf("Vous serez 'minime'.\n");
    break;
  case 13:
  case 14:
    printf("Vous serez 'cadet'.\n");
    break;
  case 15:
  case 16:
    printf("Vous serez 'scolaire'.\n");
    break;
  case 17:
  case 18:
    printf("Vous serez 'espoir'.\n");
    break;
  default:
    if(age < 18)
      printf("Vous ne pouvez pas vous inscrire ;-).\n");
    else
      printf("Vous serez 'senior'.\n");
    break;
  }
  
  return 0;
}

  

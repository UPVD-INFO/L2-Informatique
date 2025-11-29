#include <stdio.h>

int main() {
  int a;
  printf("Valeur de a=");
  scanf("%d", &a);

  (a < 0) ? (printf("--> valeur negative \n")) : (printf("--> valeur positive \n"));
  
  return 0;
}

// Pour a = 5: affichage de '--> valeur positive'
// Pour a = -4: affichage de '--> valeur negative'
// La structure A ? B : C equivaut a la structure suivante :
// if( A ) {
//   B
// }else{
//   C
// }

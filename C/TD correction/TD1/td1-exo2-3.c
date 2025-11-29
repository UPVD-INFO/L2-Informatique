#include <stdio.h>

#define TAUX_CNSS 0.175f
#define TAUX_IMPOT 0.035f

#define PRIME_ENFANT 17.f

int
main(void)
{
  float salaire_net, salaire_base, salaire_brut, valeur_impot, valeur_cnss, prime_technicite, prime_transport, prime_enfants, taux_travail;
  int nombre_jours, nombre_enfants;

  printf("Salaire de base= ");
  scanf("%f", &salaire_base);
  printf("Prime de technicite= ");
  scanf("%f", &prime_technicite);
  printf("Prime de transport= ");
  scanf("%f", &prime_transport);
  printf("Nombre d'enfants= ");
  scanf("%d", &nombre_enfants);
  printf("Nombre de jours travailles= ");
  scanf("%d", &nombre_jours);

  prime_enfants = nombre_enfants * PRIME_ENFANT;
  taux_travail = nombre_jours / 26.f;

  salaire_brut = (salaire_base + prime_technicite + prime_transport + prime_enfants) * taux_travail;

  valeur_impot = TAUX_IMPOT * salaire_brut;
  valeur_cnss = TAUX_CNSS * salaire_brut;
  
  salaire_net = salaire_brut - valeur_impot - valeur_cnss;

  printf("Finalement, salaire net= %f.\n", salaire_net);

  return 0;
}

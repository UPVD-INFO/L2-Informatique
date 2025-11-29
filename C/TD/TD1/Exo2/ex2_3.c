#include <stdio.h>

int main()
{
    float taux_impo = 0.035,taux_CNSS = 0.175,net,brut,base,prime_tech,prime_transport,prime_enfts;
    float taux_travail,val_impo,val_CNSS,nombre_enfants;

    printf("Combien de jours tu travaille? = \n");
    scanf("%f",&taux_travail);
    taux_travail= taux_travail/26;
    
    printf("Quel est le salaire de base?= \n");
    scanf("%f",&base);
    printf("Quel est ta prime de technicite?= \n");
    scanf("%f",&prime_tech);
    printf("Quel est ta prime de transport?= \n");
    scanf("%f",&prime_transport);

    printf("Vous avez combien d'enfants?= \n");
    scanf("%f",&nombre_enfants);
    printf("Quel est la prime pour un enfant?= \n");
    scanf("%f",&prime_enfts);
    prime_enfts= prime_enfts * nombre_enfants;

    brut= (base+prime_tech+prime_transport+prime_enfts)*taux_travail;
    val_impo= taux_impo*brut;
    val_CNSS= taux_CNSS*brut;

    net= brut - val_impo - val_CNSS;

    printf("Le salaire net est de= %f \n",net);
    
    return 0;
}

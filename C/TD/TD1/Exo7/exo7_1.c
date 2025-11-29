#include <stdio.h>

int main(){
    int age;
    printf("Donnez moi votre age= \n");
    scanf("%d", &age);

    switch(age){
        case 5:
        case 6:
        printf("La categorie selon l'age est poussin \n");
        break;
        
        case 7:
        case 8:
        printf("La categorie selon l'age est diablotin \n");
        break;

        case 9:
        case 10:
        printf("La categorie selon l'age est preminime \n");
        break;

        case 11:
        case 12:
        printf("La categorie selon l'age est minime \n");
        break;

        case 13:
        case 14:
        printf("La categorie selon l'age est cadet \n");
        break;

        case 15:
        case 16:
        printf("La categorie selon l'age est scolaire \n");
        break;

        case 17:
        case 18:
        printf("La categorie selon l'age est espoir \n");
        break;
        
        default:
        if (age<5){
            printf("Vous n'avez pas l'age pour vous inscrire");
        }
        else{
            printf("La categorie selon l'age est senior \n");    
        }
    }

    return 0;
}
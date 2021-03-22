
#include <stdio.h>

int plus_moins(int choix)
{
    int valeur_a_trouver=10;

    while (choix != valeur_a_trouver)
    {

        printf("faites votre choix : ");
        scanf("%d",&choix);
       

    }

    printf("Bingo! Tu as Ressie a trouver la valeur \n ");

    
    return choix;
}


int main()
{
    int choix_joueur,res;
    
    printf("faites votre choix : ");
    scanf("%d",&choix_joueur);
    res=plus_moins(choix_joueur);

   
    
}


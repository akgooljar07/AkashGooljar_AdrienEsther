
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int plus_moins(int choix)
{
    int valeur_a_trouver=10;
    if(choix<valeur_a_trouver)
    {
        printf("Moins grand\n");
        
    }
    
    else if(choix>valeur_a_trouver)
    {
        printf("Plus grand\n");
        
    }
    
    else{
        
        printf("Bingo\n");
    }
    
    return choix;
}



int main()
{
    int z,choix_joueur,res;
    srand (time(NULL));

    choix_joueur = rand() % 100;
    z =choix_joueur;
    printf("%d\n",z );

    res=plus_moins(z);

    
}


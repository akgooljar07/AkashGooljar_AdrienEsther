
#include <stdio.h>

int plus_moins(int choix)
{
    int valeur_a_trouver=10;
    if(choix<valeur_a_trouver)
    {
        printf("Moins grand");
        
    }
    
    else if(choix>valeur_a_trouver)
    {
        printf("Plus grand");
        
    }
    
    else{
        
        printf("Bingo");
    }
    
    return choix;
}


int main()
{
    int choix_joueur,res;
    
    printf("faites votre choix");
    scanf("%d",&choix_joueur);
    res=plus_moins(choix_joueur);
    
}


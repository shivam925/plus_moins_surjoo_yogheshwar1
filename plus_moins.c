#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int numero, choix_joueur;

    
    numero = 32;

    printf("J'ai un nombre en tête (0-50). Pouvez-vous le deviner?\n");
    
    while (1)
    {
        printf("Insérez votre supposition: ");
        scanf("%d", &choix_joueur);

        if (numero == choix_joueur)
        {
            printf("Bingo!");
            break;
        }
        else if (numero > choix_joueur)
        {
            printf("Plus que %d!!\n\n", choix_joueur);
        }
        else 
        {
            printf("Moins que %d!!\n\n", choix_joueur);
        }
    }

    return 0;
}
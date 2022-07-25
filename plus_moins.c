#include<stdio.h>
#include<stdlib.h>
int plus_moins(int choix_joueur, int valeur_a_trouver)
{
	if(choix_joueur < valeur_a_trouver)
	{
		printf("Plus\n");
		return 0;
	}
	if(choix_joueur > valeur_a_trouver)
	{
		printf("Moins\n");
		return 1;
	}
	if(choix_joueur == valeur_a_trouver)
	{
		printf("Bingo\n");
		return 2;
	}
}
int main()
{
	int valeur_a_trouver = rand() % 100 + 1;
	int choix_joueur;
	int resultat;
	int mode;
	int i = 0;
	printf("À quel point aimeriez-vous que le jeu soit difficile?:\n");
	printf("Insérer 1 pour facile\n");
	printf("Insérer 2 pour moyen\n");
	printf("Insérer 3 pour difficile\n");
	scanf("%d",&mode);
	if(mode == 1)
	{
		printf("Pour trouver le nombre caché, insérez un nombre entier: ");
		scanf("%d",&choix_joueur);
		resultat = plus_moins(choix_joueur,valeur_a_trouver);
	}while(resultat<=1);
		do
		{
			printf("Pour trouver le nombre caché, insérez un nombre entier: ");
			scanf("%d",&choix_joueur);
			resultat = plus_moins(choix_joueur,valeur_a_trouver);
		i = i + 1;
		}while(i<=1);
	
	if(mode == 2)
	{
		do
                {
                        printf("Pour trouver le nombre caché, insérez un nombre entier: ");
                        scanf("%d",&choix_joueur);
                        resultat = plus_moins(choix_joueur,valeur_a_trouver);
			i = i + 1;
                }while(i<25);
	}
	if(mode == 3)
	{
		do
                {
                        printf("Pour trouver le nombre caché, insérez un nombre entier: ");
                        scanf("%d",&choix_joueur);
                        resultat = plus_moins(choix_joueur,valeur_a_trouver);
			i = i + 1;
                }while(i<10);
	}
}

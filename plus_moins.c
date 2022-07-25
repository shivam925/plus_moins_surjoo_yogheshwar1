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
	int valeur_a_trouver;
	int choix_joueur;
	int resultat;

	int score_joueur1 = 0;
	int score_joueur2 = 0;
	int coup;
	int i;

	printf("Veuillez entrer le nombre de tours qui seront joués. ");
	scanf("%d",&i);
	do
	{
		valeur_a_trouver = rand() % 100 + 1;
		printf("\nJoueur 1, Veuillez entrer un nombre maximum de coups pour le joueur 2. (doit etre plus grand que a 10): ");
		scanf("%d",&coup);
		do
		{
			printf("Pour trouver le nombre caché, insérez un nombre entier: ");
			printf("\nJoueur 2, inserez un nombre entier pour essayer de trouver le nombre cacher: ");
			scanf("%d",&choix_joueur);
			resultat = plus_moins(choix_joueur,valeur_a_trouver);

			if(resultat<2)
				coup = coup - 1;
		}while(resultat<=1 && coup>0);
		score_joueur2 = score_joueur2 + coup;



		valeur_a_trouver = rand() % 100 + 1;
		printf("\nJoueur 2, veillez inserer un nombre de coup maximum a jouer par le Joueur 1(doit etre superieur a 10): ");
        	scanf("%d",&coup);
        	do
        	{
        	        printf("\nJoueur 1, inserez un nombre entier pour essayer de trouver le nombre cacher: ");
        	        scanf("%d",&choix_joueur);
        	        resultat = plus_moins(choix_joueur,valeur_a_trouver);
        	        if(resultat<2)
        	                coup = coup - 1;
        	}while(resultat<=1 && coup>0);
        	score_joueur1 = score_joueur1 + coup;

		i = i - 1;
	}while(i>0);



	printf("\nLe resultat du Joueur 1 est: %d",score_joueur1);
	printf("\nLe resultat du Joueur 2 est: %d",score_joueur2);
	if(score_joueur1>score_joueur2)
		printf("\nLe Joueur 1 a remporte le match!\n");
	if(score_joueur1<score_joueur2)
		printf("\nLe Joueur 2 a remporte le match!\n");
	if(score_joueur1==score_joueur2)
                printf("\nMatch Nul\n");
}
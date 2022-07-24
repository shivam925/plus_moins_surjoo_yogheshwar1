#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void choix_joueur(int N)
{
	int valeur_a_trouver, choix_joueur, nombre_de_devinettes = 0;


	srand(time(NULL));


	valeur_a_trouver = rand() % N;

	printf("Devinez un nombre entre"
		" 1 et %d\n",
		N);


	do {

		if (nombre_de_devinettes > 20) {
			printf("\nVous perdez!\n");
			break;
		}


		scanf("%d", &choix_joueur);


		if (choix_joueur > valeur_a_trouver)

		{
			printf("Moins\n");
			nombre_de_devinettes++;
		}

		else if (valeur_a_trouver > choix_joueur)

		{
			printf("Plus\n");
			nombre_de_devinettes++;
		}

		else
			printf("Vous avez deviné le"
				" nombre dans %d "
				"tentatives!\n",
				nombre_de_devinettes);

	} while (choix_joueur != valeur_a_trouver);
}


int main()
{
	int N = 100;


	choix_joueur(N);

	return 0;
}

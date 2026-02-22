// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex12
// Nom du fichier 		: Ex12.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Fonction qui affiche les adresses d'un tableau
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier  

// Fonction ShowItems

#include "ShowItems.h"

int main (void)
{
	char UserAnswer;

	// Variables pour test A //
	int i;
	float TableA[NB_CASES_TB]; //constante déclarée dans le.h// 


	// Variables pour test B //
	int ValB;
	char MatriceB[16][4] =
	{
	  {0, 0, 0, 0},
	  {0, 0, 0, 1},
	  {0, 0, 1, 0},
	  {0, 0, 1, 1},
	  {0, 1, 0, 0},
	  {0, 1, 0, 1},
	  {0, 1, 1, 0},
	  {0, 1, 1, 1},
	  {1, 0, 0, 0},
	  {1, 0, 0, 1},
	  {1, 0, 1, 0},
	  {1, 0, 1, 1},
	  {1, 1, 0, 0},
	  {1, 1, 0, 1},
	  {1, 1, 1, 0},
	  {1, 1, 1, 1},
	};


	printf("Ex12  Steeve Pouly \n");  // A adapter

	// Boucle initialisation du tableau du testA //

	for (i = 0; i < NB_CASES_TB; i++)
	{
		TableA[i] = (float)10.00 + ((float)i/(float)100.0) ;
	}
	 
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: affichage des informations de TableA \n");
				ShowItems(NB_CASES_TB, &TableA[0]);   // TableA 
				

				
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez le numero de ligne (max 15) \n");

				// insersion valeur utilisateur max 15 //
				scanf_s("%d", &ValB, 2);

				// Condition si max 15 faire //
				if (ValB <= 15)
				{
					// afficher valeur de la ligne(tableau) //
					printf("TestB: No Ligne = %d [3]=%d [2]=%d [1]=%d [0]=%d\n", ValB, MatriceB[ValB][0], MatriceB[ValB][1], MatriceB[ValB][2], MatriceB[ValB][3]);
				}
				else  //sinon mettre a 15 valeur utilisateur et afficher tableau //
				{
					ValB = 15;
					printf("TestB: No Ligne = %d [3]=%d [2]=%d [1]=%d [0]=%d\n", ValB, MatriceB[ValB][0], MatriceB[ValB][1], MatriceB[ValB][2], MatriceB[ValB][3]);

				};
				
			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}
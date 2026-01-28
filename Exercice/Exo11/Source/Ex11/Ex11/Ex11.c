// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex11
// Nom du fichier 		: Ex11.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Fonctions qui retourne la valeur des unités d'un nombre
//						  Fonctions qui retourne retourne le résultat de la division entière. 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 


// Fonction fDivInt
#include "fDivInt.h"

// Fonction Extract
#include "Extract.h"

int main (void)
{
	char UserAnswer;
	// Variables pour test A
	int ValA_dividende, ValA_diviseur;
	int Resultat;
	// Variables pour test B
	int ValB;
	short int Valcent;
	short int Valdiz;
	short int Valuni;

	// Invite exercice 11
	printf("EX11 Steeve Pouly  \n");
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez le dividende  \n");
				scanf_s("%d%*c", &ValA_dividende);
				printf("TestA: entrez le diviseur  \n");
				scanf_s("%d%*c", &ValA_diviseur);
				if (ValA_diviseur == 0)
				{
					printf("TestA : erreur division par 0 ! \n");
				}
				else
				{
					Resultat = fDivInt(ValA_dividende, ValA_diviseur);
					printf("Resultat de %d / %d = %d, reste = %d", ValA_dividende, ValA_diviseur, Resultat, Reste);
				}
				

		break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de 0  a 999 \n");
				scanf_s("%d%*c", &ValB);
				if (ValB > 999)
				{
					printf("ValB limitée a 999 !  \n");
					ValB = 999;
					Valcent = // a trouver`!!!!
					Valdiz = // a trouver!!!!!
					Valuni = Extract(ValB);
					printf("ValB = %d centaines = %d dizaines = %d unites = %d \n", ValB, Valcent, Valdiz, Valuni);

				}
				else
				{
					Valuni = Extract(ValB);
					printf("ValB = %d centaines = %d dizaines = %d unites = %d \n", ValB, Valcent, Valdiz, Valuni);
				}

		break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}
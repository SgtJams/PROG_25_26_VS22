// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex11
// Nom du fichier 		: Ex11_new.c
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


//-- Fonction fDivInt --//
#include "fDivInt.h"

//-- Fonction Extract --//
#include "Extract.h"

int main(void)
{
	char UserAnswer;
	//-- Variables pour test A --//
	int ValA_dividende, ValA_diviseur;
	int Resultat;
	int Reste;

	//-- Variables pour test B --//
	int ValB;
	short int Valcent;
	short int Valdiz;
	short int Valuni;

	//-- Invite exercice 11 --//
	printf("EX11 Steeve Pouly  \n");
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);

		//---- Partie A ----//
		switch (UserAnswer) {
		case 'A':
		case 'a':
			printf("TestA: entrez le dividende  \n");
			scanf_s("%d%*c", &ValA_dividende);
			printf("TestA: entrez le diviseur  \n");
			scanf_s("%d%*c", &ValA_diviseur);

			//-- Affichage des valeurs --//
			if (ValA_diviseur == 0)
			{
				//-- Affichage si diviseur = 0 --//
				printf("TestA : erreur division par 0 ! \n");
			}
			else
			{
				Resultat = fDivInt(ValA_dividende, ValA_diviseur, &Reste);
				//-- Affichage valeurs divisées --//
				printf("Resultat de %d / %d = %d, reste = %d \n", ValA_dividende, ValA_diviseur, Resultat, Reste);
			}
		break;

		//---- Partie B ----//
		case 'B':
		case 'b':
			printf("TestB: entrez un nombre de 0  a 999 \n");
			scanf_s("%d%*c", &ValB);

			//-- Affichage des valeurs --//
			//-- Affichage valeur limitée --//
			if (ValB > 999)
			{
				printf("ValB limitee a 999 !  \n");
				ValB = 999;
				Valuni = Extract(ValB, &Valcent, &Valdiz);
				printf("ValB = %d centaines = %d dizaines = %d unites = %d \n", ValB, Valcent, Valdiz, Valuni);
			}
			else
			{
				//-- Affichage valeur calculé --//
				Valuni = Extract(ValB, &Valcent, &Valdiz);
				printf("ValB = %d centaines = %d dizaines = %d unites = %d \n", ValB, Valcent, Valdiz, Valuni);
			}
		break;

		} //end switch//

	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}
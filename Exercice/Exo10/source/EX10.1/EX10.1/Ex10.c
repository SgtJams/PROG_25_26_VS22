// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex10
// Nom du fichier 		: Ex10.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Fonctions qui retourne la valeur factionnaire d'un nombre
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 
#include <math.h>	// pour ceil et floor


// Fonction FtestA
#include "FtestA.h"

// Fonction Extract
#include "Extract.h"


int main (void)
{
	//-- Variable pour code général --//
	char UserAnswer;
	// Variables pour test A
	double valA;
	int PartInt;
	double PartFract;
	
	//-- Variables pour test B --//
	unsigned long ValB;
	unsigned short NbHeures;
	unsigned short NbMinutes;
	unsigned short int NbSecondes;

	printf("Ex10 Steeve Pouly \n");
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) 
		{
			case 'A':
			case 'a':
				printf("TestA: entrez un nombre fractionnaire  \n");
				scanf_s("%lf%*c", &valA); //enregistrement des valeur donné sur la console dans la variable valA//
				//PartFract = valA;
				PartInt = FtestA(valA, &PartFract);
				//-- Affichage des valeurs demandées --//
				printf("ValA = %.2Lf PartInt = %d PartFract = %.2Lf \n", valA, PartInt, PartFract);
				
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValB); //enregistrement des valeur donné sur la console dans la variable valB//
				//NbHeures = ValB;
				//NbMinutes = ValB;
				NbSecondes = Extract(ValB, &NbHeures, &NbMinutes);
				//-- Affichage des valeurs demandées --//
				printf("ValB = %lu NbHeures = %hu NbMinutes = %hu NbSecondes = %hu \n", ValB, NbHeures, NbMinutes, NbSecondes);

				break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}
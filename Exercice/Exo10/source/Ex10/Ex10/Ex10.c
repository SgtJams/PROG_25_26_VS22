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
	char UserAnswer;
	// Variables pour test A
	double valA;
	int PartInt;
	double PartFract = 3.14;
	
	// Variables pour test B
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
				scanf_s("%lf%*c", &valA);
				PartInt = FtestA(valA, &PartFract);
				printf("ValA = %Lf PartInt = %d PartFract = %Lf", valA, PartInt, PartFract);
				
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValB);
				NbHeures = ValB / 60;
				NbMinutes = NbHeures / 60;
				NbSecondes = Extract(ValB);
				printf("ValB = %d NbHeures = %d NbMinutes = %%d NbSecondes = %d", ValB, NbHeures, NbMinutes, NbSecondes);

				break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}
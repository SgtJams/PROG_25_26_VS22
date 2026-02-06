// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex14
// Nom du fichier 		: Ex14.c
// Date de création 	: 06.02.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Systeme de test avec 4 cas séparés
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

// Structure S_hms
struct S_hms
{
	short int NmbrH;
	short int NmbrM;
	short int NmbrS;
};

// Structure S_hms_D


// Fonction CalSec
#include "CalcSec.h"

// Fonction GetHMS_B
#include "GetHMS_B.h"

// Fonction GetHMS_C
#include "GetHMS_C.h"

// Fonction GetHMS_D


int main (void)
{
	char UserAnswer;
	// Variables pour test A
	int HeuresA, MinutesA, SecondesA;

	// Variables pour test B
	int ValB;
	short int SoldeSec;
	short int NmbrH;
	short int NmbrM;
	short int* ptNmbrH;
	short int* ptNmbrM;
	ptNmbrH = &NmbrH;
	ptNmbrM = &NmbrM;

	// Variables pour test C
	int ValC;
	

	// Variables pour test D
	int ValD;


	printf("Ex14  Steeve Pouly \n");	// à MAJ

	do {
		printf("Test A, B, C ou D, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez le nb d'heures  \n");
				scanf_s("%d%*c", &HeuresA);
				printf("TestA: entrez le nb de minutes  \n");
				scanf_s("%d%*c", &MinutesA);
				SecondesA = CalcSec(HeuresA, MinutesA);
				printf("TestA : Heures = %d Minutes = %d Nb secondes = %d\n", HeuresA, MinutesA, SecondesA);


			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValB);
				SoldeSec = GetHMS_B(ValB,&NmbrH,&NmbrM);
				printf("TestB : %d sec represente %d[h] %d[m] %d[s]\n", ValB, *ptNmbrH, *ptNmbrM, SoldeSec);

			break;

			case 'C':
			case 'c':
				printf("TestC: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValC);
				GetHMS_C();
				printf("TestB : %d sec represente %d[h] %d[m] %d[s]\n", ValC, *ptNmbrH, *ptNmbrM, SoldeSec);

			break;

			case 'D':
			case 'd':
				printf("TestD: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValD);
				// Suite TestD

			break;
		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}
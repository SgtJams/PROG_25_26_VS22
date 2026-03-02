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

//-- lib perso --//
#include "LibGestTime.h"

int main (void)
{
	char UserAnswer;

	//-- Variables pour test A --//
	int HeuresA, MinutesA, SecondesA;

	//-- Variables pour test B --//
	int ValB;
	short int SoldeSec;
	short int NmbrH;
	short int NmbrM;
	//short int *ptNmbrH;
	//short int *ptNmbrM;
	//ptNmbrH = &NmbrH;
	//ptNmbrM = &NmbrM;

	//-- Variables pour test C --//
	int ValC;
	S_hms Valheur;

	short int *ptNmbrHC;
	short int *ptNmbrMC;
	short int *ptNmbrSC;

	ptNmbrHC = &Valheur.NmbrH;
	ptNmbrMC = &Valheur.NmbrM;
	ptNmbrSC = &Valheur.NmbrS;
	

	//-- Variables pour test D --//
	int ValD;
	S_Hms_D ResD;

	short *ptResD;
	short *ptResDH;
	short *ptResDM;
	short *ptResDS;
	
	ptResD = &ResD; 
	ptResD = &ResD.NbSec;
	ptResDH = &ResD.TabHMS[2];
	ptResDM = &ResD.TabHMS[1];
	ptResDS = &ResD.TabHMS[0];

	S_Hms_D* pt_str; //-- version pro --//
	pt_str = &ResD; //-- version pro --//

	//-- Affichage debut texte console --//
	printf("Ex14  Steeve Pouly \n");

	do {
		printf("Test A, B, C ou D, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) 
		{
			//---- Partie A ----//
			case 'A':
			case 'a':
				printf("TestA: entrez le nb d'heures  \n");
				scanf_s("%d%*c", &HeuresA);
				printf("TestA: entrez le nb de minutes  \n");
				scanf_s("%d%*c", &MinutesA);

				//-- Appel de la fonction --//
				SecondesA = CalcSec(HeuresA, MinutesA);

				//-- Afichage Valeurs --//
				printf("TestA : Heures = %d Minutes = %d Nb secondes = %d\n", HeuresA, MinutesA, SecondesA);

			break;

			//---- Partie B ----//
			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValB);

				//-- appel de la fonction --//
				SoldeSec = GetHMS_B(ValB,&NmbrH,&NmbrM);

				//-- Afichage Valeurs --//
				printf("TestB : %d sec represente %d[h] %d[m] %d[s]\n", ValB, NmbrH, NmbrM, SoldeSec);

			break;

			//---- Partie C ----//
			case 'C':
			case 'c':
				printf("TestC: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValC);

				//-- appel de la fonction --//
				GetHMS_C(ValC, &Valheur);

				//-- Afichage Valeurs avec utilisation moin pratique des pointeurs--//
				printf("TestB : %d sec represente %d[h] %d[m] %d[s]\n", ValC, *ptNmbrHC, *ptNmbrMC, *ptNmbrSC);

			break;

			//---- Partie D ----//
			case 'D':
			case 'd':
				printf("TestD: entrez un nombre de secondes \n");
				scanf_s("%d%*c", &ValD);

				//--pointeur pour récup de la valeur ValD --//
				*ptResD = ValD;

				//-- appel de la fonction --//
				GetHMS_D(&ResD);

				//-- Afichage Valeurs selon plusieur façon (débutant, intérmédiaire,pro) --//
				printf("TestB : %d sec represente %d[h] %d[m] %d[s]\n", ValD, ResD.TabHMS[2], pt_str->TabHMS[1], *(ptResD+1));

			break;
		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}
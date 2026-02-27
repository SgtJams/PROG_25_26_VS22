//-----------------------------------------------------------------------------------//
// Nom du projet 		: EX13_Mise_en_appli
// Nom du fichier 		: Ex13StrcutureGroupe.c
// Date de création 	: 23.02.2026
// Date de modification : xx.xx.20xx
//
// Auteur 				: Pouly Steeve
//
// Description          : Création de fonctions selon plusieur élements donnés.
//
//
// Remarques			: lien pour les lib standard:
//						-> https://www.rocq.inria.fr/secret/Anne.Canteaut/COURS_C/annexe.html
//						-> 
//
//----------------------------------------------------------------------------------//

//-- déclaration de librairies systèmes --// 
#include <stdio.h>			// entrée/sortie 
#include <stdlib.h>			// lib standard -> fonctions system 
#include <stdint.h>			// types entiers normalisés

//-- déclration de librairies personnelles --// 
#include "Fonctions.h"

//-- déclaration de définition --// 
#define MSG_BIENVENU		"Ex Structure - Version "
#define VERSION_CODE		0.1
#define TAILLE_TB_BINAIRE	8
#define TAILLE_TB_RIUP		5
#define	NB_TB_AFFICHER		3
#define	VAL_MAX_SECONDE		31449600

//-- déclaration de constantes --// 


//-- déclaration de structure --// 
//-- Structure Partie A --//
/**truct st_tbCode
{
	int8_t tbNRZ[8];
	int8_t tnNRZi[9];
};*/

//-- Structure Partie C --//
struct str_tbInfoRIUP
{
	uint16_t tbR[TAILLE_TB_RIUP];		//	tableau de 5 résitances 
	float	 tbI[TAILLE_TB_RIUP];		//	tableau 5 courant 
	int8_t	 tbU[TAILLE_TB_RIUP];		//	tableau 5 tension 
	float	 tbP[TAILLE_TB_RIUP];		//  tableau 5 Puissance 
};

//-- Structure Partie D --//
struct str_trioTR
{
	int8_t	adj, opp, hyp; 
	float	alpha_radian; 
	int16_t aplha_degre; 
};


//-- programme principale --//
void main()
{
	//------ déclaration de variables ------// 
	//-- Variables pour partie A --//
	int8_t tbBinaire[TAILLE_TB_BINAIRE] = { 0,1,1,0,0,1,1,0 };
	S_tbnzr TbNzr;

	//-- déclaration pointeurs --//
	char* ptTbNzr;		
	char* ptTbNzri;
	ptTbNzr = &TbNzr.tbNRZ;
	ptTbNzri = &TbNzr.tnNRZi;


	//-- Variables pour partie B --//
	S_convT SJHMs;
	S_convT SJHMs2;

	int Time1 = 654852;
	int Time2 = 1225453;


	//-- Variables pour partie C --//
	struct str_tbInfoRIUP infosRIUP;

	int* ptinfosRIUP;
	ptinfosRIUP = &infosRIUP;


	//-- Variables pour partie D --//
	struct str_trioTR infoCotes; 
	int32_t* ptinfoCotes;
	ptinfoCotes = &infoCotes;

	//-- msg pour l'utilisateur --//
	printf("%s %1.1f \n", MSG_BIENVENU, VERSION_CODE); 


	//-------------- PARTIE A - GROUPE 1 ---------------// 

	//-- appel de la fonction codage --//
	Codage(tbBinaire, &TbNzr);

	//-- affichage des tableaux non codé et codé --// //pas touche!!!!//
	for(int nbTb = 0 ; nbTb < NB_TB_AFFICHER ; nbTb++)
	{
		if (nbTb == 0)
			printf("Tableau binaire : "); 
		else if (nbTb == 1)
			printf("Tableau NRZ : ");
		else 
			printf("Tableau NRZi : ");

		//-- affichage --//
		for (int i = 0; i < TAILLE_TB_BINAIRE; i++)
		{
			//-- affichage tb binaire --//
			if (nbTb == 0)
				printf("%d", tbBinaire[i]); 

			//-- affichage tb code NRZ --//
			else if (nbTb == 1)
				printf("%d", TbNzr.tbNRZ[i]);

			//-- affichage tb code NRZi --//
			else
				printf("%d", TbNzr.tnNRZi[i]);
		}
		//-- retour à la ligne --// 
		printf("\n\n");

	}


	//-------------- PARTIE B - GROUPE 2 ---------------//
	
	//-- appel de la fonction de conversio --// 
	ConvSJHMs(Time1, &SJHMs);
	ConvSJHMs(Time2, &SJHMs2);

	//-- affichage MSG user --// 
	printf("Premier Test : temps 1 : %d [s] vaut ", Time1);
	printf("%d Semaine : %d Jour : %d Heures : %d Minutes : %d Secondes \n", SJHMs.NmbrSem, SJHMs.NmbrJ, SJHMs.NmbrH, SJHMs.NmbrM, SJHMs.NmbrS);
	printf("Premier Test : temps 2 : %d [s] vaut ", Time2);
	printf("%d Semaine : %d Jour : %d Heures : %d Minutes : %d Secondes \n", SJHMs2.NmbrSem, SJHMs2.NmbrJ, SJHMs2.NmbrH, SJHMs2.NmbrM, SJHMs2.NmbrS);

	//-- retour à la ligne --// 
	printf("\n\n");


	//-------------- PARTIE C - GROUPE 3 ---------------//
	
	//-- initialisation d'une partie de la structure --//  
	infosRIUP.tbP[0] = 5.5;
	infosRIUP.tbU[0] = -12;

	infosRIUP.tbI[1] = 4.5 * pow(10, -3);
	infosRIUP.tbR[1] = 4200;

	infosRIUP.tbP[2] = 2.5; 
	infosRIUP.tbR[2] = 72 * pow(10, 3);

	infosRIUP.tbI[3] = .5;
	infosRIUP.tbU[3] = 24;

	infosRIUP.tbI[4] = 1; 
	infosRIUP.tbP[4] = .1;

	//-- appel de la fonction pour calculer la loi ohm sur des tableaux de structure --// 


	//-- afficher les information 4 éléments RIUP pour 5 données --// 
	printf("R = ?? | I = ?? | U = ?? | P = ??"); 

	//-- retour à la ligne --// 
	printf("\n\n");


	//-------------- PARTIE D - GROUPE 4 ---------------//
	
	//-- initialisation d'une partie de la structure --// 
	infoCotes.adj = 5; 
	infoCotes.aplha_degre = 45; 

	//-- appel de la fonction pour calculer la trigonométrie du triangle --// 
	TrigoTR(&infoCotes);

	//-- affichage des valeurs --//
	printf("cote oppose vaut : "); 
	printf("cote adjacent vaut : ");
	printf("cote hypotenuse vaut : ");
	printf("angle alpha radian : ");
	printf("angle alpha degre : ");

	system("pause");	// -> environnement windows 
}
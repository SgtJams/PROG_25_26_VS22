//-----------------------------------------------------------------------------------//
// Nom du projet 		: EX13_Mise_en_appli
// Nom du fichier 		: Codage.c
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
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie 
								// math 

//-- librairie standard --// 
#include <math.h>
#include <stdint.h>			// types entiers normalisés

//-- librairie perso --// 
#include "Fonctions.h"

//----------------------------------------------------------------------------------//
//-- nom fct : Codage
//-- paramètre entrée : int8_t tbbin / tableau binaire
//-- paramètre sortie : -
//-- paramètre IN-OUT : S_tbnzr* ptS_tbnzr = pointage sur tableau NRZI et NRZ
//-- description	  : Transformation d'un code binaire en format NRZI et NRZ
//----------------------------------------------------------------------------------//
void Codage(int8_t tbbin[], S_tbnzr* ptS_tbnzr)
{
	//-- Declaration Variable fonction --//
	int8_t ValPos = 5;
	int8_t ValNeg = -5;
	int8_t i = 0;

	for (i = 0; i < 8; i++)
	{
		if (tbbin[i] == 0)
		{

			ptS_tbnzr->tbNRZ[i] = ValPos;
			ptS_tbnzr->tnNRZi[i+1] = ValPos;
			
		}
		else
		{
			ptS_tbnzr->tbNRZ[i] = ValNeg;
			ptS_tbnzr->tnNRZi[i+1] = ValNeg;
		}
	}
}
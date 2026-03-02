//-----------------------------------------------------------------------------------//
// Nom du projet 		: EX13_Mise_en_appli
// Nom du fichier 		: LoiOhm.c
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
//-- nom fct : LoiOhm
//-- paramètre entrée : char indice/ à quel tableau on aplique la fonction
//-- paramètre sortie : -
//-- paramètre IN-OUT : str_tbInfoRIUP* ptstr_tbInfoRIUP/ pointeur sur la structure str_tbInfoRIUP
//-- description	  : Application de la loi d'Ohm
//----------------------------------------------------------------------------------//
void LoiOhm(char indice, str_tbInfoRIUP* ptstr_tbInfoRIUP)
{
	//------ Calcul de R ------//
	//-- Calcul de R avec U/I --//
	if (ptstr_tbInfoRIUP->tbR[indice] == 0 && ptstr_tbInfoRIUP->tbU[indice] != 0 && ptstr_tbInfoRIUP->tbI[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbR[indice] = ptstr_tbInfoRIUP->tbU[indice] / ptstr_tbInfoRIUP->tbI[indice];
	};
	//-- Calcul de R avec P/I2 --//
	if (ptstr_tbInfoRIUP->tbR[indice] == 0 && ptstr_tbInfoRIUP->tbP[indice] != 0 && ptstr_tbInfoRIUP->tbI[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbR[indice] = ptstr_tbInfoRIUP->tbP[indice] / pow(ptstr_tbInfoRIUP->tbI[indice], 2);
	};
	//-- Calcul de R avec U2/P --//
	if (ptstr_tbInfoRIUP->tbR[indice] == 0 && ptstr_tbInfoRIUP->tbP[indice] != 0 && ptstr_tbInfoRIUP->tbU[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbR[indice] = pow(ptstr_tbInfoRIUP->tbU[indice], 2) / ptstr_tbInfoRIUP->tbP[indice];
	};

	//------ Calcul de I ------//
	//-- Calcul de I avec U/R --//
	if (ptstr_tbInfoRIUP->tbI[indice] == 0 && ptstr_tbInfoRIUP->tbU[indice] != 0 && ptstr_tbInfoRIUP->tbI[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbI[indice] = ptstr_tbInfoRIUP->tbU[indice] / ptstr_tbInfoRIUP->tbR[indice];
	};
	//-- Calcul de I avec P/V  --//
	if (ptstr_tbInfoRIUP->tbI[indice] == 0 && ptstr_tbInfoRIUP->tbP[indice] != 0 && ptstr_tbInfoRIUP->tbU[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbI[indice] = ptstr_tbInfoRIUP->tbP[indice] / ptstr_tbInfoRIUP->tbU[indice];
	};
	//-- Calcul de R avec rac(P/R) --//
	if (ptstr_tbInfoRIUP->tbI[indice] == 0 && ptstr_tbInfoRIUP->tbP[indice] != 0 && ptstr_tbInfoRIUP->tbR[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbI[indice] = sqrtf(ptstr_tbInfoRIUP->tbP[indice] / ptstr_tbInfoRIUP->tbR[indice]); //sqtr = racine//sqtrf = racine pour du float
	};

	//------ Calcul de U ------//
	//-- Calcul de U avec R*I --//
	if (ptstr_tbInfoRIUP->tbU[indice] == 0 && ptstr_tbInfoRIUP->tbR[indice] != 0 && ptstr_tbInfoRIUP->tbI[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbU[indice] = ptstr_tbInfoRIUP->tbR[indice] * ptstr_tbInfoRIUP->tbI[indice];
	};
	//-- Calcul de U avec P/I  --//
	if (ptstr_tbInfoRIUP->tbU[indice] == 0 && ptstr_tbInfoRIUP->tbP[indice] != 0 && ptstr_tbInfoRIUP->tbU[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbU[indice] = ptstr_tbInfoRIUP->tbP[indice] / ptstr_tbInfoRIUP->tbI[indice];
	};
	//-- Calcul de U avec rac(P*R) --//
	if (ptstr_tbInfoRIUP->tbU[indice] == 0 && ptstr_tbInfoRIUP->tbP[indice] != 0 && ptstr_tbInfoRIUP->tbR[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbU[indice] = sqrtf(ptstr_tbInfoRIUP->tbP[indice] * ptstr_tbInfoRIUP->tbR[indice]);
	};

	//------ Calcul de P ------//
	//-- Calcul de P avec R*I2 --//
	if (ptstr_tbInfoRIUP->tbP[indice] == 0 && ptstr_tbInfoRIUP->tbR[indice] != 0 && ptstr_tbInfoRIUP->tbI[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbP[indice] = ptstr_tbInfoRIUP->tbR[indice] * pow(ptstr_tbInfoRIUP->tbI[indice],2); 
	};
	//-- Calcul de P avec U/I  --//
	if (ptstr_tbInfoRIUP->tbP[indice] == 0 && ptstr_tbInfoRIUP->tbU[indice] != 0 && ptstr_tbInfoRIUP->tbI[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbP[indice] = ptstr_tbInfoRIUP->tbU[indice] * ptstr_tbInfoRIUP->tbI[indice];
	};
	//-- Calcul de P avec U2/R --//
	if (ptstr_tbInfoRIUP->tbP[indice] == 0 && ptstr_tbInfoRIUP->tbU[indice] != 0 && ptstr_tbInfoRIUP->tbR[indice] != 0)
	{
		ptstr_tbInfoRIUP->tbP[indice] = pow(ptstr_tbInfoRIUP->tbU[indice],2) / ptstr_tbInfoRIUP->tbR[indice];
	};
};
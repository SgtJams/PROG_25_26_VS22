//-----------------------------------------------------------------------------------//
// Nom du projet 		: EX13_Mise_en_appli
// Nom du fichier 		: TrigoTR.c
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
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie math 

//-- librairie standard --// 
#include <math.h>
#include <stdint.h>			// types entiers normalisés

//-- librairie perso --// 
#include "Fonctions.h"

//----------------------------------------------------------------------------------//
//-- nom fct : TrigoTR
//-- paramètre entrée : -
//-- paramètre sortie : -
//-- paramètre IN-OUT : str_trioTR* ptstr_trioTR/pointeur sur la structure str_trioTR
//-- description	  : Application de trigonométrique sur un triangle
//----------------------------------------------------------------------------------//
void TrigoTR(str_trioTR* ptstr_trioTR)
{
	
	//---------------- Conversion en radian ----------------//
	if (ptstr_trioTR->aplha_degre != 0 && ptstr_trioTR->alpha_radian == 0)
	{
		ptstr_trioTR->alpha_radian = (int16_t)roundf((ptstr_trioTR->aplha_degre * M_PI ) / 180);
	};

	//---- Conversion en degrée ----//
	if (ptstr_trioTR->alpha_radian != 0 && ptstr_trioTR->aplha_degre == 0)
	{
		ptstr_trioTR->aplha_degre = (int16_t)roundf((ptstr_trioTR->alpha_radian * 180) / M_PI);
	};


	//---------------- Calcul des cotés ----------------//

	//------ Calcul pour adj ------//
	//-- Calcul adj avec pytagore --//
	if (ptstr_trioTR->adj == 0 && ptstr_trioTR->hyp != 0 && ptstr_trioTR->opp != 0)
	{
		ptstr_trioTR->adj = (int8_t)roundf(sqrtf(powf(ptstr_trioTR->hyp, 2) + powf(ptstr_trioTR->opp, 2)));
	};
	//-- Calcul adj avec hyp et cos --//
	if (ptstr_trioTR->adj == 0 && ptstr_trioTR->hyp != 0 && ptstr_trioTR->alpha_radian != 0)
	{
		ptstr_trioTR->adj = ptstr_trioTR->hyp * cos(ptstr_trioTR->alpha_radian);
	};
	//-- Calcul adj avec opp et tan --//
	if (ptstr_trioTR->adj == 0 && ptstr_trioTR->hyp != 0 && ptstr_trioTR->alpha_radian != 0)
	{
		ptstr_trioTR->adj = ptstr_trioTR->opp / tan(ptstr_trioTR->alpha_radian);
	};

	//------ Calcul pour hyp ------//
	//-- Calcul hyp avec pytagore --//
	if (ptstr_trioTR->adj != 0 && ptstr_trioTR->hyp == 0 && ptstr_trioTR->opp != 0)
	{
		ptstr_trioTR->hyp = (int8_t)roundf(sqrtf(powf(ptstr_trioTR->adj, 2) + powf(ptstr_trioTR->opp, 2)));
	};
	//-- Calcul hyp avec opp et sin --//
	if (ptstr_trioTR->hyp == 0 && ptstr_trioTR->opp != 0 && ptstr_trioTR->alpha_radian != 0)
	{
		ptstr_trioTR->hyp = ptstr_trioTR->opp / sin(ptstr_trioTR->alpha_radian);
	};
	//-- Calcul hyp avec adj et cos --//
	if (ptstr_trioTR->hyp == 0 && ptstr_trioTR->adj != 0 && ptstr_trioTR->alpha_radian != 0)
	{
		ptstr_trioTR->hyp = ptstr_trioTR->adj / cos(ptstr_trioTR->alpha_radian);
	};

	//------ Calcul pour opp ------//
	//-- Calcul opp avec pytagore--//
	if (ptstr_trioTR->adj != 0 && ptstr_trioTR->hyp != 0 && ptstr_trioTR->opp == 0)
	{
		ptstr_trioTR->opp = (int8_t)roundf(sqrtf(powf(ptstr_trioTR->hyp, 2) + powf(ptstr_trioTR->adj, 2)));
	};
	//-- Calcul opp avec hyp et sin --//
	if (ptstr_trioTR->opp == 0 && ptstr_trioTR->hyp != 0 && ptstr_trioTR->alpha_radian != 0)
	{
		ptstr_trioTR->opp = ptstr_trioTR->hyp / sin(ptstr_trioTR->alpha_radian);
	};
	//-- Calcul opp avec adj et tan --//
	if (ptstr_trioTR->opp == 0 && ptstr_trioTR->adj != 0 && ptstr_trioTR->alpha_radian != 0)
	{
		ptstr_trioTR->opp = ptstr_trioTR->adj / tan(ptstr_trioTR->alpha_radian);
	};

	//---- Calcul des angles ----//
	if (ptstr_trioTR->alpha_radian == 0)
	{
		//-- Calcul angle radian avec sin --//
		if (ptstr_trioTR->opp != 0 && ptstr_trioTR->hyp != 0)
		{
			ptstr_trioTR->alpha_radian = asinf(ptstr_trioTR->opp / ptstr_trioTR->hyp);
		};
		//-- Calcul angle radian avec cos --//
		if (ptstr_trioTR->adj != 0 && ptstr_trioTR->hyp != 0)
		{
			ptstr_trioTR->alpha_radian = acosf(ptstr_trioTR->adj / ptstr_trioTR->hyp);
		};
		//-- Calcul angle radian avec tan --//
		if (ptstr_trioTR->opp != 0 && ptstr_trioTR->adj != 0)
		{
			ptstr_trioTR->alpha_radian = atanf(ptstr_trioTR->opp / ptstr_trioTR->adj);
		};
	};
};
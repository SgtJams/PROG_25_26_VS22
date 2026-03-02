//-----------------------------------------------------------------------------------//
// Nom du projet 		: EX13_Mise_en_appli
// Nom du fichier 		: ConvSJHMs.c
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
#include <stdint.h>				// types entiers normalisés

//-- librairie perso --// 
#include "Fonctions.h"

//----------------------------------------------------------------------------------//
//-- nom fct : ConvSJHMs
//-- paramètre entrée : int time / valeur temps donnée en seconde
//-- paramètre sortie : -
//-- paramètre IN-OUT : S_convT* ptS_convT / pointeur sur la structure S_convT
//-- description	  : Transformation d'une valeur donnée en seconde en format semaine,jour,heurs,minutes,seconde
//----------------------------------------------------------------------------------//
void ConvSJHMs(int time, S_convT* ptS_convT)
{
	//-- Calcul et transformation --//
	int SecondeParSemaine = 7 * 24 * 3600;		//calcul nbr de seconde dans une semaine"604800"//
	int SecondeParJour = 3600 * 24;			    //calcul nbr de seconde dans un jour "86400"//

	ptS_convT->NmbrSem = time / SecondeParSemaine;						//-- Val Semaines --//
	ptS_convT->NmbrJ = (time % SecondeParSemaine) / SecondeParJour;		//-- Val Jours --//
	ptS_convT->NmbrH = (time % SecondeParJour) / 3600;					//-- val Heures --//
	ptS_convT->NmbrM = (time % 3600) / 60;								//-- val Minutes --//
	ptS_convT->NmbrS = time % 60;										//-- val Secondes --//
};
// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex14
// Nom du fichier 		: GetHMS_C.c
// Date de création 	: 06.02.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Affiche les heures, minutes,seconde avec un nbr de seconde données.mais avec l'option des structures
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie math 

//-- librairie standard --// 
#include <math.h>
//#include <corecrt_math_defines.h>		// autre possibilité pour utiliser les cst de la librairie math

//-- librairie perso --//  
#include "LibGestTime.h"

//----------------------------------------------------------------------------------//
//-- nom fct : GetHMS_C
//-- paramètre entrée : int nbrSec = nbr de secondes données.
//-- paramètre sortie : -
//-- paramètre IN-OUT : short S_hms *ptS_hms = pointage sur valeur d'un structure donnant des heures et des minutes et des secondes calculées.
//-- description	  : Transformation d'un valeur donné en seconde en un block donnant heures minutes et secondes.
//----------------------------------------------------------------------------------//
void GetHMS_C(int nbrSec, S_hms* ptS_hms)
{
	//-- Calcul et transformation --//
	ptS_hms->NmbrH = nbrSec / 3600;				//-- val Heures --//
	ptS_hms->NmbrM = (nbrSec % 3600) / 60;		//-- val Minutes --//
	ptS_hms->NmbrS = (nbrSec % 3600) % 60;		//-- val Secondes --//
};
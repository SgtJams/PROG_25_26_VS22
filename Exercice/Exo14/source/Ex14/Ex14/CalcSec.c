// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex14
// Nom du fichier 		: CalcSec.c
// Date de création 	: 06.02.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Affiche les seconde avec des heure et des minutes données
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie 
								// math 

//-- librairie standard --// 
#include <math.h>
//#include <corecrt_math_defines.h>		// autre possibilité pour utiliser les cst de
										// de la librairie math

//-- librairie perso --//  
#include "LibGestTime.h"

//----------------------------------------------------------------------------------//
//-- nom fct : CalcSec
//-- paramètre entrée : int nbrH = Nombre d'heures
//-- paramètre sortie : int NbrSec = retour calcul nmbr de seconde
//-- paramètre IN-OUT : - 
//-- description	  : Transformation en seconde de valeur de minute et d'heures données.
//----------------------------------------------------------------------------------//
int CalcSec(int nbrH, int nbrM)
{
	//-- Declaration Variable fonction --//
	int NbrSec;
	int NbrH;
	int NbrM;

	//-- Transformation en seconde --//

	NbrH = nbrH * 3600;
	NbrM = nbrM * 60;
	NbrSec = NbrH + NbrM;

	return (NbrSec);
} 

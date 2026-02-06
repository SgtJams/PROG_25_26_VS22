// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex14
// Nom du fichier 		: GetMHS_B.c
// Date de création 	: 06.02.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Affiche les heures, minutes,seconde avec un nbr de seconde données.
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
#include "GetHMS_B.h"

//----------------------------------------------------------------------------------//
//-- nom fct : GetHMS_B
//-- paramètre entrée : int nbrSec = nbr de secondes données.
//-- paramètre sortie : short int ReturnSec = retour des secondes du calcul.
//-- paramètre IN-OUT : short int *ptnbrH / short int *ptnbrM = pointage sur valeur des heure et des minutes calculées.
//-- description	  : Transformation d'un valeur donné en seconde en un block donnant heures minutes et secondes.
//----------------------------------------------------------------------------------//
short int GetHMS_B(int nbrSec, short int* ptnbrH, short int* ptnbrM)
{
	//-- Declaration Variable fonction --//
	short int ReturnSec;

	//-- Calcul et transformation --//

	*ptnbrH = nbrSec / 3600;			//-- val Heures --//
	*ptnbrM = (nbrSec % 3600)/60;		//-- val Minutes --//
	ReturnSec = (nbrSec % 3600)%60;		//-- val Secondes --//

	return (ReturnSec);
}
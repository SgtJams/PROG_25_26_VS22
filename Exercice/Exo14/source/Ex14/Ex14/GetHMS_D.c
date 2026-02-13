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
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie 
								// math 

//-- librairie standard --// 
#include <math.h>
//#include <corecrt_math_defines.h>		// autre possibilité pour utiliser les cst de
										// de la librairie math

//-- librairie perso --//  
#include "LibGestTime.h"


//----------------------------------------------------------------------------------//
//-- nom fct : GetHMS_D
//-- paramètre entrée : null
//-- paramètre sortie : null
//-- paramètre IN-OUT : S_Hms_D* ptS_Hms_D = pointage sur valeur des heures et des minutes et des secondes calculées dans un champ en tableau
//-- description	  : Transformation d'un valeur donné en seconde en un block donnant heures minutes et secondes.
//----------------------------------------------------------------------------------//
void GetHMS_D(S_Hms_D* ptS_Hms_D)
{

	//-- Calcul et transformation --//

	ptS_Hms_D->TabHMS[2] = ptS_Hms_D->NbSec / 3600;				//-- val Heures --//
	ptS_Hms_D->TabHMS[1] = (ptS_Hms_D->NbSec % 3600) / 60;		//-- val Minutes --//
	ptS_Hms_D->TabHMS[0] = (ptS_Hms_D->NbSec % 3600) % 60;		//-- val Secondes --//
}
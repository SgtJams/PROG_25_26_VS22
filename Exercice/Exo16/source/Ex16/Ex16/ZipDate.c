// -----------------------------------------------------------------------------------//
// Nom du projet 		: Ex16
// Nom du fichier 		: ZipDate.c
// Date de création 	: 09.03.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Affiche les heures, minutes,seconde avec un nbr de seconde données.mais avec l'option des structures
//
//
// Remarques :            Canevas pour l'exercice 16 SL124_LOGA.
//						  lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie math 

//-- librairie standard --// 
#include <math.h>
//#include <corecrt_math_defines.h>		// autre possibilité pour utiliser les cst de la librairie math

//-- librairie perso --//  
#include "ZipDate.h"

//----------------------------------------------------------------------------------//
//-- nom fct : ZipDate
//-- paramètre entrée :
//-- paramètre sortie : 
//-- paramètre IN-OUT : 
//-- description	  : Transformation de paramètre d'entrée a une date sous forme codée de manière compressée
//----------------------------------------------------------------------------------//

//-- Declaration Union --//

union u_DecodeDate
{
	struct						//pas obliger de la déclarer car pas utilisé dans un autre fichier//
	{
		unsigned short day;
		unsigned short month;
		unsigned short year;

	};
};



unsigned short ZipDate(unsigned char day, unsigned char month, unsigned short year)
{
	unsigned short ZipDate;

	union u_DecodeDate Varu_DecodeDate;

	ZipDate =.......

	return(ZipDate);
} 

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
//-- paramètre entrée : unsigned char day, unsigned char month, unsigned short year
//-- paramètre sortie : unsigned short ZipDate
//-- paramètre IN-OUT : -
//-- description	  : Transformation de paramètres d'entrée à une date sous forme codée de manière compressée
//----------------------------------------------------------------------------------//

//-- Définition local de l'Union --//

union u_DecodeDate
{
	unsigned short DateCodee;			//Variable pour récupérer la date codée//

	struct								//pas obliger de la déclarer car pas utilisé dans un autre fichier (pas de typdef)//
	{
		unsigned short day : 5;			//création d'une structure mais avec des valeurs précises du nombre de bit par champ//
		unsigned short month : 4;
		unsigned short year : 7;		//on aura une constante qui commence a 1950//

	};
};

//-- Déclaration fonction --//

unsigned short ZipDate(unsigned char day, unsigned char month, unsigned short year)
{
	//-- Déclaration de l'union --//
	union u_DecodeDate Val_DecodeDate;			

	//-- Mise a jours des valleur qui devront etre codée --//
	Val_DecodeDate.day = day;
	Val_DecodeDate.month = month;
	Val_DecodeDate.year = 1950 + year;			//1950 plus valeur de 0à128//

	Val_DecodeDate.DateCodee = {Val_DecodeDate.day, };

	return(ZipDate);
} 

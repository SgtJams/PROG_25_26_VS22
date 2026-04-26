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
		unsigned short year : 7;	//LSB//	//création d'une structure mais avec des valeurs précises du nombre de bit par champ//
		unsigned short month : 4;
		unsigned short day : 5;		//MSB// //on aura une constante de 1950 qui fera la diference avec la valeur rentrée//

	};
};

//-- Déclaration fonction --//
unsigned short ZipDate(unsigned char day, unsigned char month, unsigned short year)
{
	//-- Déclaration de l'union --//
	union u_DecodeDate Val_DecodeDate;	

	//-- Déclaration Variable --//
	unsigned short ZipDate;

	//-- Mise a jours des valleurs qui devront être codée --//
	Val_DecodeDate.day = day;
	Val_DecodeDate.month = month;
	Val_DecodeDate.year = year - 1950 ;			//valeur année - cst 1950//

	ZipDate = Val_DecodeDate.DateCodee;			//Dans la variable dateCodee on va retrouver la structure car on est dans une union//

	return(ZipDate);
} 

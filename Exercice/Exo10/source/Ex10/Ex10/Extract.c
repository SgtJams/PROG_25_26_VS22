// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex10
// Nom du fichier 		: Extract.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Fonctions qui retourne la valeur factionnaire d'un nombre
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
#include "Extract.h"


//----------------------------------------------------------------------------------//
//-- nom fct : EXTRACT
//-- paramètre entrée : unsigned long
//-- paramètre sortie : unsigned short int
//-- paramètre IN-OUT : - 
//-- description	  : donner l'heure,minute,seconde
//----------------------------------------------------------------------------------//
unsigned short int Extract(unsigned long valIn)
{
	//-- déclaration variable --// 
	unsigned short int NbSecondes;

	//-- calcul de valIn --//
	NbSecondes = valIn / 3600;

	//-- retour valIn --// 
	return ( NbSecondes);
}

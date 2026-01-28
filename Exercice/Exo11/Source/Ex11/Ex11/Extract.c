// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex11
// Nom du fichier 		: Extract.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Fonctions qui retourne la valeur des unités d'un nombre
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
//-- paramètre entrée : int(ValB)
//-- paramètre sortie : short int
//-- paramètre IN-OUT : - 
//-- description	  : Retour valeu unité d'un nbr
//----------------------------------------------------------------------------------//
int Extract(short int valIn)
{
	//-- déclaration variable --// 
	 int Valunite;

	//-- calcul de valIn --//
	 Valunite = valIn; // à trouver

	//-- retour valIn --// 
	return (Valunite);
}

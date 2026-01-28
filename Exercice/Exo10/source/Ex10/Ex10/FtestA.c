// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex10
// Nom du fichier 		: FtestA.c
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
#include "FtestA.h"


//----------------------------------------------------------------------------------//
//-- nom fct : FtestA
//-- paramètre entrée : float 
//-- paramètre sortie : double
//-- paramètre IN-OUT : - 
//-- description	  : donner la valeur fractionner sans virgule, et la valeur après la virgule
//----------------------------------------------------------------------------------//
int FtestA(double valIn, double *pf)
{
	//-- déclaration variable --// 
	double PartInt;
	double PartFract;

	//-- calcul de valIn --//
	PartInt = floor(valIn);
	*pf= ceil(valIn);

	//-- retour perimetre --// 
	return (PartInt);
}

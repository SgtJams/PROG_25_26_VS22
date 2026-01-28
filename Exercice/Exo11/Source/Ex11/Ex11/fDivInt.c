// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex11
// Nom du fichier 		: fDivInt.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Fonctions qui retourne retourne le résultat de la division entière. 
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
#include "fDivInt.h"


//----------------------------------------------------------------------------------//
//-- nom fct : fDivInt
//-- paramètre entrée : int,int
//-- paramètre sortie : int
//-- paramètre IN-OUT : - 
//-- description	  : donner l'heure,minute,seconde
//----------------------------------------------------------------------------------//
int fDivInt(int valnum,int valdiv)
{
	//-- déclaration variable --// 
	 int Resultat;
	 int Reste;

	//-- calcul de Resultat --//
	 Resultat = valnum / valdiv;
	 Reste = valnum % valdiv;

	//-- retour Resultat --// 
	return (Resultat);
}

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
//-- paramètre entrée : int valnum, int valdiv/ variables entré du dividente et du diviseur
//-- paramètre sortie : int Resultat / variable de retour de la fonction pour le résultat du calcul
//-- paramètre IN-OUT : int* ptR / pointeur sur le reste de la division
//-- description	  : donner valeur d'un calcul de division
//----------------------------------------------------------------------------------//
int fDivInt(int valnum, int valdiv, int* ptR)
{
	//-- déclaration variable --// 
	int Resultat;

	//-- calcul de Resultat --//
	Resultat = valnum / valdiv;		//Calcul du resultat de la division//
	*ptR = valnum % valdiv;			//calcul du reste de la division//

	//-- retour Resultat --// 
	return (Resultat);
}

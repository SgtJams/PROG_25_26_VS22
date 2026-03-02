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
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie math 

//-- librairie standard --// 
#include <math.h>
//#include <corecrt_math_defines.h>		// autre possibilité pour utiliser les cst de la librairie math

//-- librairie perso --//  
#include "Extract.h"


//----------------------------------------------------------------------------------//
//-- nom fct : EXTRACT
//-- paramètre entrée : int(ValB)
//-- paramètre sortie : int Valunite / variables retour des untité
//-- paramètre IN-OUT : short int* ptCen, short int* ptDiz / pointeurs sur variable des centaines et des dizaines
//-- description	  : Retour valeurs unité d'un nbr
//----------------------------------------------------------------------------------//
short int Extract(int valIn, short int* ptCen, short int* ptDiz)
{
	//-- déclaration variable --// 
	int Valunite;

	//-- calcul de valIn --//
	*ptCen = valIn / 100;			//Calcul des centaines//
	*ptDiz = (valIn % 100) / 10;	//Calcul des dizaines//
	Valunite = valIn % 10;			//Calcul des unités//

	//-- retour valIn --// 
	return (Valunite);
}
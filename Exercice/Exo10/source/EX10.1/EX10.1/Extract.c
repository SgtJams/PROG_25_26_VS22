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
//-- paramètre entrée : unsigned long valIn
//-- paramètre sortie : unsigned short int (return of NbSecondes)
//-- paramètre IN-OUT : unsigned short *ptH, unsigned short *ptM
//-- description	  : donner l'heure,minute,seconde
//----------------------------------------------------------------------------------//
unsigned short int Extract(unsigned long valIn, unsigned short *ptH, unsigned short *ptM)
{
	//-- déclaration variable --// 
	unsigned short int NbSecondes;
	double NbHeures;
	double NbMinutes;
	double ValIn = valIn;

	//-- calcul de valIn --//
	
	*ptH = valIn / 3600;
	*ptM = (valIn % 3600) / 60;
	NbSecondes = valIn % 60;

	//NbHeures  = (ValIn / 3600.0);
	//*ptH = floor(NbHeures);
	//NbMinutes = ((ValIn / 3600.0) - NbHeures) * 60.0;
	//*ptM = floor(NbMinutes);
	//NbSecondes = ((((ValIn / 3600.0) - NbHeures) * 60.0) - NbMinutes) * 60.0;
	
	//-- retour valIn --// 
	return (NbSecondes);
}

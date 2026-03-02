// ---------------------------------------------------------------------------------- -//
// Nom du projet 		: Ex12
// Nom du fichier 		: Showltems.c
// Date de création 	: 25.01.2026
// Date de modification : 
//
// Auteur 				: Pouly (St. Pouly)
//                       
//
// Description          : Fonctions qui retourne l'adress,la valeur, l'indice d'un tableau
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//
#define _USE_MATH_DEFINES		// pour utiliser des constantes liés à la librairie math 

//-- librairie standard --// 
#include <math.h>
//#include <corecrt_math_defines.h>		// autre possibilité pour utiliser les cst  de la librairie math

//-- librairie perso --//  
#include "ShowItems.h"

//----------------------------------------------------------------------------------//
//-- nom fct : ShowItems
//-- paramètre entrée : short NbreElem (TablA) 
//-- paramètre sortie : -
//-- paramètre IN-OUT : float *ptAdressTab (pointeur sur adresse du tableau TableA)
//-- description	  : Fonctions qui retourne l'adress,la valeur, l'indice d'un tableau
//----------------------------------------------------------------------------------//
void ShowItems(char ptNbrElem, float* ptAdressTab)
{
	//-- déclaration variable --// 
	int i;
	//char* ptEx;
	//ptEx = ptAdressTab;

	//-- boucle d'affichage --// 
	for (i = 0; i < ptNbrElem; i++)		//////!!!!!!!Atention le I prend le type de la variable utilisé dans la boucle///////////
	{
		//-- déplacement pointeur --// 
		printf("TestA : indice = %d, adresse item = %p, valeur item = %.2lf \n", i, (ptAdressTab + i), *(ptAdressTab + i));

		//printf("Adressse pointee (float) : %p \n",  ptAdressTab);  // %p == uniquement pour les adresses de pointeur //
		//printf---(ptAdressTab + i) = on donne l'adresse incrémentée avec i ////*(ptAdressTab + i) = on donne la valeur incrémentée avec i//
		//printf(" Adressse du pointeur incremente par i : %p \n\n ", (ptEx + i)); //Exemple pour montrer l'importance de la règle du I avec des pointeur//
	};
	//-- retour Resultat --// 
};

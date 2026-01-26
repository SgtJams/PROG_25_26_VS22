//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice 7 - Fonctions
// Nom du fichier 		: AffParalleD.c
// Date de création 	: 15.12.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Steeve.Pouly
//						  Valentin Mermoud
//
// Version				: 0.1
//
// Description          : Réalisation d'une fonction ayant pour but de représenter la même image figurant dans le CDC dans le groupe G.
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//-- librairie standard --//
#include <stdio.h>  //-- <> utilisé pour le standard --//
#include <stdint.h>

#include "AffParalleD.h"

//-- programme principale --//

void main()
{
	unsigned char nbetoile = 0; //déclaration

	nbetoile = AffParalleD(13);	//Apelle de la fonction//

	printf(" %d \n", nbetoile); //Affichage du nbr etoile afficher//
}
